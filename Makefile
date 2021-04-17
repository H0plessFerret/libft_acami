# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acami <acami@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 15:17:44 by acami             #+#    #+#              #
#    Updated: 2021/04/17 15:23:52 by acami            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
HEADERS		= ./
SRCS		= ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS		= ${SRCS:.c=.o}
TMPS		= ${SRCS:.c=.c~}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I ${HEADERS}
AR			= ar
ARFLAGS		= rc
LIBRAN		= ranlib
RM			= rm -f

.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${ARFLAGS} ${NAME} ${OBJS}
			${LIBRAN} ${NAME}

all:		${NAME}

clean:		
			${RM} ${TMP}

fclean:		clean
			${RM} ${OBJS}

re:			fclean all

.PHONY:		all clear fclean re