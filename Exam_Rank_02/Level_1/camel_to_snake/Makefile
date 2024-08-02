# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:26:41 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:26:42 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= camel_to_snake.c
NAME		= run
OBJS		= $(SRC:%.c=%.o)

RM			= rm -rf

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g3
COMP_OBJ	= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE	= $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

%.o:		%.c
			$(COMP_OBJ)

$(NAME):	$(OBJS)
			$(COMP_EXE)
			./$(NAME) | cat -e

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
