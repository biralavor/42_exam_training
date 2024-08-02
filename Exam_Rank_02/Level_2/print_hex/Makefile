# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:01:42 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:01:45 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= print_hex.c
NAME		= run
OBJ_FILES	= $(SRC:%.c=%.o)
BUILD_D		= ./build/

RM			= rm -rf
MKDIR		= mkdir -p

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -pedantic -g3

COMP_OBJ	= $(CC) $(CFLAGS) -c $< -o $@
COMP_EXE	= $(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

all:		$(NAME)

(BUILD_D)%.o:	%.c
				$(COMP_OBJ)

$(NAME):		$(OBJ_FILES)
				$(COMP_EXE)
				./$(NAME) 5156454

clean:
				$(RM) $(OBJ_FILES)
				$(RM) $(BUILD_D)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re