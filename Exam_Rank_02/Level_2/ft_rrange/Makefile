# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:37:59 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:38:07 by umeneses         ###   ########.fr        #
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

vai:			re
				./$(NAME) $(ARGV)

gdb:			re
				gdb -q --tui -ex 'b ft_rrange' -ex 'run' ./$(NAME)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re vai gdb
