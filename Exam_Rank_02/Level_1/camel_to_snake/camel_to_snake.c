/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:17:46 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:18:23 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	idx = 0;
	while(str[idx] != '\0')
		idx++;
	return (idx);
}

void	camel_to_snake(char *str)
{
	int		cp_idx = 0;
	int		idx = 0;
	char	*copy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while(str[idx] != '\0')
	{
		if (!(str[idx] >= 65 && str[idx] <= 90))
		{
			copy[cp_idx] = str[idx];
			cp_idx++;
			idx++;
		}
		if (str[idx] >= 65 && str[idx] <= 90)
		{
			copy[cp_idx] = '_';
			cp_idx++;
			copy[cp_idx] = str[idx] + 32;
			cp_idx++;
			idx++;
		}
	}
	ft_putstr(copy);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
