/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:50:10 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:50:34 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "max.c"

int	main(void)
{
	unsigned int	size = 4;
	int				tab[256] = {7, 42 , 0, -5};
	unsigned int	max_nbr = 0;

	max_nbr = max(tab, size);
	printf("max_nbr = %d\n", max_nbr);
	return(0);
}
