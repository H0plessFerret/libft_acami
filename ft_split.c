/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:31:23 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 22:59:48 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_is_sep(char sym, char separator)
{
	if ((sym == '\0') || (sym == separator))
		return (1);
	return (0);
}

size_t	ft_space_needed(const char *str, char separator)
{
	size_t	space_required;
	size_t	count;

	space_required = 0;
	count = 0;
	if (ft_strlen(str) == 0)
		return (0);
	if (ft_strlen(str) == 1)
	{
		if (ft_is_sep(*str, separator))
			return (0);
		return (1);
	}
	if (!ft_is_sep(*str, separator))
		++space_required;
	while (*(str + 1) != '\0')
	{
		if (ft_is_sep(*str, separator) != ft_is_sep(*(str + 1), separator))
			++space_required;
		++str;
	}
	if (!ft_is_sep(*str, separator))
		++space_required;
	return (space_required / 2);
}

size_t	ft_wordlen(const char *str, char separator)
{
	size_t	count;

	count = 0;
	while (!ft_is_sep(*(str + count), separator))
		++count;
	return (count);
}

static void	ft_free_split(char ***res, size_t amount_to_del)
{
	size_t	count;

	count = 0;
	while (count < amount_to_del)
	{
		free(*(*res + count));
		++count;
	}
	free(*res);
	*res = NULL;
}

char	**ft_split(char const *str, char separator)
{
	char	**res;
	size_t	count;
	size_t	curr_word;

	res = (char **)malloc(sizeof(char *) * ft_space_needed(str, separator) + 1);
	if (res == NULL)
		return (res);
	*(res + ft_space_needed(str, separator)) = NULL;
	curr_word = 0;
	while (*str != '\0')
	{
		if (!ft_is_sep(*str, separator))
		{
			*(res + curr_word) = (char *)malloc(ft_wordlen(str, separator) + 1);
			if (*(res + curr_word) == NULL)
			{
				ft_free_split(&res, curr_word);
				return (res);
			}
			count = 0;
			while (!ft_is_sep(*str, separator))
			{
				*(*(res + curr_word) + count++) = *str;
				++str;
			}
			*(*(res + curr_word) + count) = '\0';
			++curr_word;
		}
		else
			++str;
	}
	return (res);
}
