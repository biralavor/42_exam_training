/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:21:10 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:21:11 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	idx = 0;
	while (str[idx] != '\0')
		idx++;
	return (idx);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

bool	is_blank(char c)
{
	return (c == 32 || (c >= 9 && c<= 13));
}

bool	has_double_blank(char *str)
{
	int	idx = 0;
	while(str[idx] != '\0')
	{
		if (is_blank(str[idx]))
		{
			if (is_blank(str[idx + 1]))
				return(true);
		}
		idx++;
	}
	return (false);
}

int	main (int ac, char **av)
{
	int	idx = 0;
	if (ac == 2)
	{
		if(has_double_blank(av[1]))
		{
			while(av[1][idx] != '\0')
			{
				if(is_blank(av[1][idx]))
					idx++;
				while(!is_blank(av[1][idx]))
				{
					write(1, &av[1][idx], 1);
					idx++;
					if(is_blank(av[1][idx]) && av[1][idx + 1] != '\0')
						write(1, " ", 1);
				}
				idx++;
			}
		}
		else
			ft_putstr(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
