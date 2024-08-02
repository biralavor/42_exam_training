/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:59:48 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:59:56 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	pgcd(int nbr1, int nbr2)
{
	int	temp = 0;
	while (nbr2 != 0)
	{
		temp = nbr2;
		nbr2 = nbr1 % nbr2;
		nbr1 = temp;
	}
	return (nbr1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int nbr1 = atoi(av[1]);
		int nbr2 = atoi(av[2]);
		printf("%d", pgcd(nbr1, nbr2));
	}
	printf("\n");
	return(0);
}
