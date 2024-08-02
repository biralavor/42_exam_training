# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:48:32 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:48:36 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e

@echo 1$$

./hidenp "abc" "2altrb53c.sse" | cat -e

@echo 1$$

./hidenp "abc" "btarc" | cat -e

@echo 0$$

./hidenp | cat -e

@echo $$
endef

ARGV				= "abc" "btarc"
SRC					= hidenp.c
NAME				= hidenp
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
