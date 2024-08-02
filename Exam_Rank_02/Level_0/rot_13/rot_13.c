/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:10:12 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 16:18:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	idx;

	idx = 0;
	if (ac == 2)
		{
			while (av[1][idx] != '\0')
			{
				if (av[1][idx] >= 'a' && av[1][idx] <= 'z')
					av[1][idx] = (av[1][idx] + 13 - 'a') % 26 + 'a';
				if (av[1][idx] >= 'A' && av[1][idx] <= 'Z')
					av[1][idx] = (av[1][idx] + 13 - 'A') % 26 + 'A';
				write(1, &av[1][idx], 1);
				idx++;
			}
		}
	write(1, "\n", 1);
	return (0);
}
