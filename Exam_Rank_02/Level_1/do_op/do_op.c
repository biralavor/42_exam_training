/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:19:49 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:19:51 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(int n1, char op, int n2)
{
	if (op == '+')
		printf("%d", (n1 + n2));
	else if (op == '-')
		printf("%d", (n1 - n2));
	else if (op == '*')
		printf("%d", (n1 * n2));
	else if (op == '/')
		printf("%d", (n1 / n2));
	else if (op == '%')
		printf("%d", (n1 % n2));
	else
		return ;
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(atoi(av[1]), *av[2], atoi(av[3]));
	printf("\n");
	return(0);
}
