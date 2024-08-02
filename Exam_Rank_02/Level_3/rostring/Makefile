# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:09:44 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:09:46 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
$>./rostring "abc   " | cat -e

@echo abc$$

$>./rostring "Que la      lumiere soit et la lumiere fut"

@echo la lumiere soit et la lumiere fut Que

$>./rostring "     AkjhZ zLKIJz , 23y"

@echo zLKIJz , 23y AkjhZ

$>./rostring "first" "2" "11000000"

@echo first

$>./rostring | cat -e

@echo $$
endef

ARGV			= "first" "2" "11000000"
SRC				= rostring.c
NAME			= rostring
OBJS			= $(SRC:%.c=%.o)

RM				= rm -rf
CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g3

COMP_OBJS		= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE		= $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

%.o:			%.c
				@$(COMP_OBJS)

$(NAME):		$(OBJS)
				@$(COMP_EXE)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

one:			re
				./$(NAME) $(ARGV) | cat -e

vai:			re
				$(call examples)

val:			re
				valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGV)

gdb:			re
				gdb --tui -ex 'b main' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)

.PHONY:			all clean fclean re one vai val gdb