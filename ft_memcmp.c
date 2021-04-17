/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 14:56:10 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 14:58:53 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (((*(unsigned char *)(s1 + c) != '\0')
		 || (*(unsigned char *)(s2 + c) != '\0'))
		 && (c < n))
	{
		if (*(unsigned char *)(s1 + c) != *(unsigned char *)(s2 + c))
		{
			return ((*(unsigned char *)(s1 + c))
				  - (*(unsigned char *)(s2 + c)));
		}
		++c;
	}
	return (0);
}
