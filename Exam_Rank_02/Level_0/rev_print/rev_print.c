/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:05:10 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:05:21 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	idx = 0;
	while(s[idx] != '\0')
		idx++;
	return(idx);
}

void	rev_print(char *av)
{
	int	len = ft_strlen(av) - 1;
	while(len >= 0)
	{
		write(1, &av[len], 1);
		len--;
	}
}

int	main (int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n" , 1);
}
