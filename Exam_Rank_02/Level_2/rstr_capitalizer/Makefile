# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:14:40 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:15:24 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


ARGV		= "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t"
SRC			= rstr_capitalizer.c
NAME		= run
OBJS		= $(SRC:%.c=%.o)

RM			= rm -rf

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g3
COMP_OBJ	= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE	= $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

%.o:		%.c
			$(COMP_OBJ)

$(NAME):	$(OBJS)
			$(COMP_EXE)
			./$(NAME) $(ARGV) | cat -e

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
