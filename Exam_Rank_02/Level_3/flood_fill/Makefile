# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 14:26:13 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 14:26:15 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples

@echo $$
endef

ARGV			= 
SRC				= test.c
NAME			= flood_fill
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
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

one:			re
				./$(NAME) $(ARGV)

vai:			re
				$(call examples)

gdb:			re
				gdb --tui -ex 'b flood_fill' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)