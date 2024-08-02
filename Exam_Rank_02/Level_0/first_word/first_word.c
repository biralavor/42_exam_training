/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:22:20 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:23:34 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_is_blank(int c)
{
	return (c == 9 || c == 11 || c == 32);
}

int	main (int ac,char **av)
{
	int	idx = 0;
	if (ac == 2)
	{
		while (ft_is_blank(av[1][idx]))
			idx++;
		while (!ft_is_blank(av[1][idx]) && av[1][idx])
		{
			write(1, &av[1][idx], 1);
			idx++;
		}

	}
	write(1, "\n", 1);
	return(0);
}
