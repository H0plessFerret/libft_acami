/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:44:07 by acami             #+#    #+#             */
/*   Updated: 2021/04/16 18:48:38 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_isalpha(int character_to_check);
int		ft_isdigit(int character_to_check);
int		ft_isalnum(int character_to_check);
int		ft_isascii(int character_to_check);
int		ft_isprint(int character_to_check);
int		ft_toupper(int character_to_update);
int		ft_tolower(int character_to_update);

char	*ft_strdup(const char *src);

#endif