# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:21:16 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:21:17 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./str_capitalizer | cat -e

@echo $$

./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e

@echo A First Little Test$$

./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e

@echo ------
@echo "__second Test A Little Bit   Moar Complex$$"

@echo "    But... This Is Not That Complex$$"

@echo "     Okay, This Is The Last 1239809147801 But Not    The Least    T$$"
endef

ARGV			= "     Okay, this is the last 1239809147801 but not    the least    t"
SRC				= str_capitalizer.c
NAME			= str_capitalizer
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
				./$(NAME) $(ARGV) | cat -e

vai:			re
				$(call examples)

val:			re
				valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGV)

gdb:			re
				gdb --tui -ex 'b main' -ex 'run $(ARGV) > /dev/null' -ex 'var' ./$(NAME)

.PHONY:			all clean fclean re one vai val gdb