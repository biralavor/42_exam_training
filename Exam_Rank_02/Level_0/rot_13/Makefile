# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:09:44 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 16:59:30 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples

./rot_13 "abc"

@echo nop

./rot_13 "My horse is Amazing." | cat -e

@echo Zl ubefr vf Nznmvat.$$

./rot_13 "AkjhZ zLKIJz , 23y " | cat -e

@echo NxwuM mYXVWm , 23l $$

./rot_13 | cat -e

@echo $$

./rot_13 "" | cat -e

@echo $$
endef

ARGV				= "xy-z 12345"
SRC					= rot_13.c
NAME				= main
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
					@$(RM) $(OBJS)

fclean:				clean
					@$(RM) $(NAME)

re:					fclean all

one:				re
					./$(NAME) $(ARGV) | cat -e

vai:				re
					$(call examples)

val:				re
					valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGV)

gdb:				re
					gdb --tui -ex 'b $(NAME)' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)

.PHONY:				all clean fclean re one vai val gdb
