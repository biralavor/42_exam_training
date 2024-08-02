# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:09:44 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:45:17 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples

./rot_13 "abc"

./rot_13 "My horse is Amazing." | cat -e

./rot_13 "AkjhZ zLKIJz , 23y " | cat -e

./rot_13 | cat -e

./rot_13 "" | cat -e

@echo $$
endef

ARGV				= "xy-z 12345"
SRC					= rot_13.c
NAME				= rot_13
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
