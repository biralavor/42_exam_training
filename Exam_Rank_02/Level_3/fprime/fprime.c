/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:27:21 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:27:22 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int nbr)
{
	int	idx = 1;
	while (nbr >= ++idx)
	{
		if (nbr % idx == 0)
		{
			printf("%d", idx);
			nbr /= idx;
			idx = 1;
			if (nbr != idx)
				printf("*");
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	printf("\n");
	return (0);
}
