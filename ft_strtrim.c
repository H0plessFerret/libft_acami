/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:21:25 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 16:30:33 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	belongs_to_set(char sym, const char *set)
{
	while (*set != '\0')
	{
		if (sym == *set)
			return (1);
		++set;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	set_elems_found_front;
	size_t	set_elems_found_back;
	size_t	count;

	set_elems_found_front = 0;
	set_elems_found_back = 0;
	count = 0;
	while (belongs_to_set(*(s1 + count), set))
	{
		++set_elems_found_front;
		++count;
	}
	count = ft_strlen(s1);
	while (belongs_to_set(*(s1 + count), set))
	{
		++set_elems_found_back;
		--count;
	}
	res = (char *)malloc(ft_strlen(s1) - set_elems_found_back
			- set_elems_found_front);
	if (res != NULL)
		ft_strlcpy(res, s1 + set_elems_found_front, ft_strlen(res));
	return (res);
}
