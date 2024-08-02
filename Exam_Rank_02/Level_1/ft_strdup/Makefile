# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:42:19 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:42:23 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARGV			=
SRC				= main.c
NAME			= run
OBJS			= $(SRC:%.c=%.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g3

RM				= rm -rf

COMP_OBJS		= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE		= $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

%.o:			%.c
				$(COMP_OBJS)

$(NAME):		$(OBJS)
				$(COMP_EXE)
				./$(NAME) $(ARGV)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all


.PHONY:			all clean fclean re

