/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:31:23 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 16:41:17 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_space_needed(const char *str, char separator)
{
	size_t	space_required;
	size_t	count;

	space_required = 0;
	count = 0;
	if (ft_strlen(str) == 0)
		return (0);
	if (ft_strlen(str) == 1)
	{
		if (*str == separator)
			return (0);
		return (1);
	}
	if (*str != separator)
		++space_required;
	while (*(str + 1) != '\0')
	{
		if (*str == separator && *(str + 1) != separator)
			++space_required;
		++str;
	}
	if (*str != separator)
		++space_required;
	return (space_required / 2);
}

static size_t	ft_wordlen(const char *str, char separator)
{
	size_t	count;

	count = 0;
	while (*(str + count) != separator)
		++count;
	return (count);
}

char	**ft_split(char const *str, char separator)
{
	char	**res;
	size_t	count;
	size_t	curr_word;

	res = (char **)malloc(sizeof(char *) * ft_space_needed(str, separator) + 1);
	*(res + ft_space_needed(str, separator)) = NULL;
	curr_word = 0;
	while (*str != '\0')
	{
		if (*str != separator)
		{
			*(res + curr_word) = (char *)malloc(ft_wordlen(str, separator) + 1);
			count = 0;
			while (*str != separator)
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
