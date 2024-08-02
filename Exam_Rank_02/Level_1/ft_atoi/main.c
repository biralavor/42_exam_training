/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:29:47 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:29:55 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_atoi.c"

int	main(void)
{
	int		nbr;
	char	*str;

	str = "+-13268!";
	nbr = ft_atoi(str);
	printf("nbr = %d\n", nbr);
	return (0);
}
