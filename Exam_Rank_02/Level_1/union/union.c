/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:25:04 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:25:21 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_isprintable(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (true);
	if (c >= 33 && c <= 126)
		return (true);
	if (c >= 128 && c <= 255)
		return (true);
	return (false);
}

int	main (int ac, char **av)
{
	int		idx = 0;
	int		c = 0;
	char	unique[255] = {0};
	if (ac == 3)
	{
		while (av[1][idx] != '\0')
		{
			if (ft_isprintable(av[1][idx]) && unique[(int)av[1][idx]] == 0)
			{
				unique[(int)av[1][idx]] = 1;
				write(1, &av[1][idx], 1);
			}
			idx++;
		}
		while (av[2][c] != '\0')
		{
			if (ft_isprintable(av[2][c]) && unique[(int)av[2][c]] == 0)
			{
				unique[(int)av[2][c]] = 1;
				write(1, &av[2][c], 1);
			}
			c++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
