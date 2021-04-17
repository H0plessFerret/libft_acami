/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 14:17:26 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 14:31:11 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int val, size_t len)
{
	while (len >= 0)
	{
		*(unsigned char *)(mem + len) = (unsigned char)val;
		--len;
	}
	return (mem);
}