/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 14:32:26 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 14:34:12 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n >= 0)
	{
		*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		--n;
	}
	return (dest);
}
