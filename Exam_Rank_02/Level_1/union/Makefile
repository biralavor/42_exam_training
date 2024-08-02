# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:24:59 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:25:00 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e

@echo zpadintoqefwjy$$

./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e

@echo df6vewg4thras$$

./union "rien" "cette phrase ne cache rien" | cat -e

@echo rienct phas$$

./union | cat -e

@echo $$

./union "rien" | cat -e

@echo $$
endef

ARGV			= "rien" "cette phrase ne cache rien"
SRC				= union.c
NAME			= union
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