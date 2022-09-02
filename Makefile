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
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_putchar_fd.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_atoi.c ft_strdup.c ft_substr.c ft_putstr_fd.c ft_strtrim.c \
		ft_strlcpy.c ft_isascii.c ft_strjoin.c ft_putnbr_fd.c \
		ft_strlcat.c ft_strnstr.c ft_calloc.c ft_putendl_fd.c \
		ft_itoa.c ft_split.c  ft_strmapi.c ft_striteri.c \

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c \
	ft_lstdelone.c ft_lstclear.c ft_lstsize.c \
	ft_lstadd_back.c ft_lstiter.c ft_lstmap.c \

BOBJS = $(BSRCS:.c=.o)

OBJS = $(SRCS:.c=.o)

.PHONY: all bonus clean fclean re

all : $(NAME)

bonus : all $(BOBJS)
	$(AR) $(NAME) $(BOBJS)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -I .

clean :
	$(RM) $(OBJS) $(BOBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
