/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:11:23 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 22:34:05 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	count;

	if (ft_strlen(str) <= start)
		return (NULL);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	count = 0;
	if (res == NULL)
		return (res);
	while ((*(str + count + start) != '\0') && (count < len))
	{
		*(res + count) = *(str + count + start);
		++count;
	}
	return (res);
}
