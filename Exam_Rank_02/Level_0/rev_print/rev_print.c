/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:05:10 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/03 08:18:56 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *s)
{
	int	len = 0;
	{
		while(s[len] != '\0')
			len++;
		while(--len >= 0)
			write(1, &s[len], 1);
	}
	return (s);
}

int	main (int ac, char **av)
{
	
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n" , 1);
	return (0);
}
