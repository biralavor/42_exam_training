/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:03:05 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:04:40 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	idx = 0;
	while(*str)
	{
		idx++;
		str++;
	}
	return(idx);
}


void	repeat_alpha(char c, int len)
{
	while (len > 0)
	{
		ft_putchar(c);
		len--;
	}
}

int	main(int ac, char **av)
{
	int	len = 0;
	if (ac == 2)
	{
		av++;
		len = ft_strlen(*av);
		while (len > 0)
		{
			if (**av >= 65 && **av <= 90)
				repeat_alpha(**av, (**av - 64));
			else if (**av >= 97 && **av <= 122)
				repeat_alpha(**av, (**av - 96));
			else
				ft_putchar(**av);
			len--;
			(*av)++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
