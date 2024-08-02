# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:24:07 by umeneses          #+#    #+#              #
#    Updated: 2024/08/02 15:24:09 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define	examples
./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e

@echo "l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION."$$

./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e

@echo "s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  "$$

./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e

@echo "3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT"$$

./ulstr | cat -e

@echo $$
endef

ARGV			= "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot"
SRC				= ulstr.c
NAME			= ulstr
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