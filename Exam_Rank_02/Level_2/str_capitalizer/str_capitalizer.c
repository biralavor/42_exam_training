/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:28 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:22:09 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_isblank(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

bool	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int	ft_strlen(char *s)
{
	int	idx = 0;

	while(s[idx] != '\0')
		idx++;
	return(idx);
}

char	lowerise_it(char c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

char	upperise_it(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void	ft_str_capitalizer(char *av)
{
	int	idx = 0;

	while (av[idx] != '\0')
	{
		if (!ft_isblank(av[idx]))
		{
			av[idx] = lowerise_it(av[idx]);
			if (av[idx - 1] == '\0' || ft_isblank(av[idx - 1]))
				av[idx] = upperise_it(av[idx]);
		}
		write(1, &av[idx], 1);
		idx++;
	}
}

int	main(int ac, char **av)
{
	int	idx = 1;

	while (av[idx] != NULL)
	{
		ft_str_capitalizer(av[idx]);
		idx++;
		write(1, "\n", 1);
	}
	if (ac == 1)
		write(1, "\n", 1);
	return (0);
}
