# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:27:43 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:28:41 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./fprime 225225 | cat -e
./fprime 8333325 | cat -e
./fprime 9539 | cat -e
./fprime 804577 | cat -e
./fprime 42 | cat -e
./fprime 1 | cat -e
./fprime | cat -e
./fprime 42 21 | cat -e
endef

ARGV			= 225225

SRC				= fprime.c
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
clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

vai:			re
				$(call examples)

gdb:			re
				gdb -q --tui -ex 'b fprime' -ex 'run' ./$(NAME)

.PHONY:			all clean fclean re vai gdb
