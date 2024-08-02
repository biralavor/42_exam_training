# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:13:53 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:14:07 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./rotone "abc"

@echo bcd

./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e

@echo Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$$

./rotone "AkjhZ zLKIJz , 23y " | cat -e

@echo BlkiA aMLJKa , 23z $$

./rotone | cat -e

@echo $$

./rotone "" | cat -e

@echo $$

endef

ARGV				= "123 - abc"
SRC					= rotone.c
NAME				= rotone
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