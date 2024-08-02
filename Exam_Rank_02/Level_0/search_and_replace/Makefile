# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:16:02 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:16:04 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./search_and_replace "Papache est un sabre" "a" "o"

@echo Popoche est un sobre

./search_and_replace "zaz" "art" "zul" | cat -e

@echo $$

./search_and_replace "zaz" "r" "u" | cat -e

@echo zaz$$

./search_and_replace "jacob" "a" "b" "c" "e" | cat -e

@echo $$

./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e

@echo ZaZ eT David aiME le METal.$$

./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e

@echo eNcOre Un ExEmPle Pas Facile a Ecrire $$
endef

ARGV			= "Papache est un sabre" "a" "o"
SRC				= search_and_replace.c
NAME			= search_and_replace
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
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

one:			re
				./$(NAME) $(ARGV) | cat -e

vai:			re
				clear
				$(call examples)

val:			re
				valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGV)

gdb:			re
				gdb --tui -ex 'b main' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)

.PHONY:			all clean fclean re one vai val gdb