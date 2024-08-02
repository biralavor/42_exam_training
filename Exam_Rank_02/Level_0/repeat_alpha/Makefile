# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:03:28 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:44:49 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./repeat_alpha "abc"

@echo abbccc


./repeat_alpha "Alex." | cat -e

@echo Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$


./repeat_alpha 'abacadaba 42!' | cat -e

@echo abbacccaddddabba 42!$


./repeat_alpha | cat -e
$

./repeat_alpha "" | cat -e
$

endef

ARGV				= 
SRC					= repeat_alpha.c
NAME				= repeat_alpha
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
