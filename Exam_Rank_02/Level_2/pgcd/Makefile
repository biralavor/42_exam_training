# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:59:35 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:59:37 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./pgcd 42 10 | cat -e

@echo 2$

./pgcd 42 12 | cat -e

@echo 6$

./pgcd 14 77 | cat -e

@echo 7$

./pgcd 17 3 | cat -e 

@echo 1$

./pgcd | cat -e

@echo $$
endef

ARGV				= 42 12
SRC					= pgcd.c
NAME				= pgcd
OBJS				= $(SRC:%.c=%.o)

RM					= rm -rf
CC					= cc
CFLAGS				= -Wall -Wextra -Werror -g3

COMP_OBJS			= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE			= $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:				$(NAME)

%.o:				%.c
					@$(COMP_OBJS)

$(NAME):			$(OBJS)
					@$(COMP_EXE)

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

one:				re
					./$(NAME) $(ARGV)

vai:					re
					$(call examples)

val:				re
					valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGV)

gdb:				re
					gdb --tui -ex 'b rotone' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)

.PHONY:				all clean fclean re one vai val gdb