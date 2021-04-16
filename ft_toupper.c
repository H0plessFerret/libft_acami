/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:38:10 by acami             #+#    #+#             */
/*   Updated: 2021/04/16 18:40:29 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int character_to_update)
{
	if ((character_to_update >= 'a') && (character_to_update <= 'z'))
		return (character_to_update - 40);
	return (character_to_update);
}
