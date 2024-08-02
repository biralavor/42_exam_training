/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:22:56 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:23:29 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

bool	ft_isblank(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(char *s)
{
	int	idx = 0;
	int	nbr = 0;
	int	sign = 1;

	if (s[idx] == '-')
	{
		sign = -1;
		idx++;
		if (s[idx] == '-' || (s[idx] == '+'))
			idx++; 
	}
	if (ft_isblank(s[idx]))
		idx++;
	while (ft_isdigit(s[idx]))
	{
		nbr = nbr * 10;
		nbr = nbr + (s[idx] - '0');
		idx++;
	}
	return (sign * nbr);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int main (int ac, char **av)
{
	int	nbr = 0;
	int	idx = 1;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (idx <= 9)
		{
			ft_putnbr(idx);
			write (1, " x ", 3);
			ft_putnbr(nbr);
			write (1, " = ", 3);
			ft_putnbr(nbr * idx);
			if (idx != 9)
				ft_putchar('\n');
			idx++;
		}
	}
	ft_putchar('\n');
	return (0);
}
