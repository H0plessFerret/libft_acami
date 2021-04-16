/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:30:14 by acami             #+#    #+#             */
/*   Updated: 2021/04/16 17:39:17 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	while ((*(src + count) != '\0') && (count < size - 2))
	{
		*(dest + count) = *(src + count);
		++count;
	}
	*(dest + count) = '\0';
	return (count);
}
