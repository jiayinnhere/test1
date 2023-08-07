# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 22:27:41 by jiachang          #+#    #+#              #
#    Updated: 2023/07/06 15:59:53 by jiachang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTNAME = libft.a

CFILES = ft_printf.c \
			print_char_len.c \
			print_decimal_len.c \
			print_hexalow_len.c \
			print_hexaup_len.c \
			print_pointer_len.c \
			print_string_len.c \
			print_unsigned_len.c \

COFILES = $(CFILES:.c=.o)

FLAGS = -Wall -Wextra -Werror 

CC = cc

RM = rm -f

ARCHIVE = ar -rcs

MAKE = make

all: $(NAME)

$(NAME): $(COFILES)
	cd libft && $(MAKE)
	# cp libft/libft.a $(NAME)
	$(ARCHIVE) $(NAME) $(COFILES)

clean:
	rm -rf $(COFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re