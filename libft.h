/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:44:07 by acami             #+#    #+#             */
/*   Updated: 2021/04/17 15:06:24 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

void	*ft_memset(void *mem, int val, size_t len);
void	bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int character, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*memchr(const void *str, int character, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int character);
char	*ft_strrchr(const char *str, int character);
char	*ft_strstr(const char *str, const char *to_find, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_isalpha(int character_to_check);
int		ft_isdigit(int character_to_check);
int		ft_isalnum(int character_to_check);
int		ft_isascii(int character_to_check);
int		ft_isprint(int character_to_check);
int		ft_toupper(int character_to_update);
int		ft_tolower(int character_to_update);

char	*ft_strdup(const char *src);
void	*ft_calloc(size_t count, size_t size);

#endif