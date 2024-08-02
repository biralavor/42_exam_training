/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:58:48 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 17:18:40 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	idx = 0;
	while(s[idx] != '\0')
		idx++;
	return (idx);
}

int	main(int ac, char **av)
{
	int	idx = 0;
	int	c = 0;
	int	ready = 0;
	char match[1024] = {'\0'} ;
	if (ac == 3)
	{
		while (av[1][idx] != '\0' && av[2][c] != '\0')
		{
			if (av[1][idx] == '\0')
				break ;
			while (av[2][c] != '\0')
			{
				if (av[1][idx] == av[2][c])
				{
					match[ready] = av[1][idx];
					ready++;
					idx++;
				}
				c++;
			}
		}
		if (ready == ft_strlen(av[1]))
		{
			idx = 0;
			while (idx < ready)
			{
				write(1, &match[idx], 1);
				idx++;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}
