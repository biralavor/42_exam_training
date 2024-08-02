# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:03:28 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:03:57 by umeneses         ###   ########.fr        #
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

ARGV			= 
SRC				= repeat_alpha.c
NAME			= repeat_alpha
OBJS			= $(SRC:%.c=%.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g3

RM				= rm -rf

COMP_OBJS		= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE		= $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

%.o:			%.c
				$(COMP_OBJS)

$(NAME):		$(OBJS)
				$(COMP_EXE)


vai:			re
				$(call examples)

gdb:			re
				gdb -q --tui -ex 'b main' -ex 'run' --args ./$(NAME) ABC

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re