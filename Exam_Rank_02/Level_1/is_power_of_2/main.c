/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:49:25 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:49:35 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "is_power_of_2.c"

int	main(void)
{
	int	nbr = 13;

	if (is_power_of_2(nbr) == 0)
		printf("result = FALSE \n---- nbr (%d) isNOT a power of two number\n", nbr);
	else
		printf("result = TRUE \n---- YES! nbr (%d) is a power of two!\n", nbr);
	return(0);
}
