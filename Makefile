# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 19:56:00 by crojano-          #+#    #+#              #
#    Updated: 2022/04/25 18:58:03 by crojano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c

OBJS		= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Ya no hay .o"

fclean:			clean
	@rm -f $(NAME)
	@echo "ni libreria"

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus