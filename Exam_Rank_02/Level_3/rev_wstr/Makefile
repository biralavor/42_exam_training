# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:07:57 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:07:58 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e

@echo ironic? it Isn't gatherings. love I But people! hate You$$

./rev_wstr "abcdefghijklm"

@echo abcdefghijklm

./rev_wstr "Wingardium Leviosa" | cat -e

@echo Leviosa Wingardium$$

./rev_wstr | cat -e
@echo $$
endef

ARGV				= "   Wingardium    Leviosa   "
SRC					= rev_wstr.c
NAME				= rev_wstr
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
					./$(NAME) $(ARGV) | cat -e

vai:					re
					$(call examples)

val:				re
					valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGV)

gdb:				re
					gdb --tui -ex 'b rev_wstr' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)

.PHONY:				all clean fclean re one vai val gdb