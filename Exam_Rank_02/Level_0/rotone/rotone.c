/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:13:37 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:13:38 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *av)
{
	while (*av != '\0')
	{
		if ((*av >= 'a' && *av <= 'y') || (*av >= 'A' && *av <= 'Y'))
			*av = *av + 1;
		else if ((*av == 'z') || (*av == 'Z'))
			*av = *av - 25;
		write(1, av, 1);
		av++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
