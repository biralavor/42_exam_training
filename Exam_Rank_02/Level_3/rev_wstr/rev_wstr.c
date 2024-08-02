/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:07:25 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:07:43 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

bool	ft_is_blank(int c)
{
	return (c ==32 || (c == 9) || (c == 11));
}

bool	ft_isprintable(int c)
{
	return (c > 32 && c<= 126);
}

int	ft_strlen(char *str)
{
	int idx = 0;
	while(*str)
	{
		idx++;
		str++;
	}
	return(idx);
}

void	rev_wstr(char *av)
{
	int	start, end, len;
	start = 0;
	end = 0;
	len = ft_strlen(av) - 1;
	while(av[len] != '\0' && len > 0)
	{
		while (av[len] && ft_is_blank(av[len]))
			len--;
		end = len;
		while (av[len] && !ft_is_blank(av[len]))
			len--;
		start = len + 1;
		while (start <= end)
			ft_putchar(av[start++]);
		len--;
		if (len - 1 > 0)
			ft_putchar(' ');
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	ft_putchar('\n');
	return (0);
}
