# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 16:58:45 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 17:18:52 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e

@echo faya$$

./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e

@echo $$

./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e

@echo forty two$$

./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e

@echo $$

./wdmatch | cat -e

@echo $$
endef

ARGV				= "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq "
SRC					= wdmatch.c
NAME				= wdmatch
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
