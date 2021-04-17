/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:41:32 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 18:18:47 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_prepare_number(int n)
{
	size_t		res;
	long long	divider;

	res = 11;
	divider = -1000000000;
	if (n > 0)
	{
		n *= -1;
		--res;
	}
	while (n / divider == 0 && divider != -1)
	{
		--res;
		divider /= 10;
	}
	return (res);
}

static long long	ft_save_next_digit(int n, long long divider, char *res,
char *num_started)
{
	char	current_digit;

	current_digit = n / divider % 10 + '0';
	divider = divider / 10;
	if ((current_digit != '0') || (num_started != 0) || (divider == 0))
	{
		*num_started = 1;
		*res = current_digit;
	}
	return (divider);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		current_pos;
	char		num_started;
	long long	divider;

	num_started = 0;
	current_pos = 0;
	divider = -1000000000;
	res = (char *)malloc((ft_prepare_number(n) + 1) * sizeof(char));
	if (res == NULL)
		return (res);
	if (n < 0)
	{
		*res = '-';
		++current_pos;
	}
	else
		n = n * -1;
	while (divider != 0)
		divider = ft_save_next_digit(n, divider,
				(res + current_pos++), &num_started);
	*(res + current_pos) = '\0';
	return (res);
}
