# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 10:48:41 by ilchahbi          #+#    #+#              #
#    Updated: 2023/12/06 09:03:58 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BNSFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c

OBJFL = $(SRCFILES:.c=.o)

OBJBN = $(BNSFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJFL)
	ar rc $@ $^
	
bonus: $(OBJBN)
	ar rc $(NAME) $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJFL) $(OBJBN)
fclean: clean
	rm -rf $(NAME) 
	
re : fclean all

 .PHONY: clean