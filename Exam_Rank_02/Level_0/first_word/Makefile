# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:26:22 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:26:23 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./first_word "FOR PONY" | cat -e

@echo FOR$$

./first_word "this        ...       is sparta, then again, maybe    not" | cat -e

@echo this$$

./first_word "   " | cat -e

@echo $$

./first_word "a" "b" | cat -e

@echo $$

./first_word "  lorem,ipsum  " | cat -e

@echo lorem,ipsum$$
endef

ARGV				= "FOR PONY"
SRC					= first_word.c
NAME				= first_word
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
