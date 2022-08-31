# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 00:34:07 by mtellami          #+#    #+#              #
#    Updated: 2022/08/28 01:10:38 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = gcc
AR = ar -rc
RM = rm -fr
FLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
       ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
       ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c ft_isalnum.c \
       ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isalpha.c ft_memmove.c \
       ft_strdup.c ft_strnstr.c ft_isascii.c ft_memset.c ft_striteri.c \
       ft_strrchr.c ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c \
       ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
OBJS = $(SRCS:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
