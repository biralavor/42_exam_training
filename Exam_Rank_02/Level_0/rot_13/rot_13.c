/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:10:12 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:10:14 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c);
void	rot_13(const char *string);
bool	ft_isalpha(int c);
bool	ft_isupper(int c);
bool	ft_islower(int c);

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc == 2)
		rot_13(argv[index]);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(const char *str)
{
	int	idx;
	int	cript = 13;
	int	up_limit = 90;
	int	low_limit = 122;
	int	up_range = up_limit - cript + 1;
	int	low_range = low_limit - cript + 1;
	int	temp;

	idx = -1;
	temp = 0;
	while(str[++idx] != '\0')
	{
		if (ft_isalpha(str[idx]))
		{

			if (ft_isupper(str[idx]))
			{
				if (str[idx] >= up_range)
				{
					temp = str[idx] - up_range;
					ft_putchar(temp + 65);
				}
				else
					ft_putchar(str[idx] + cript);
			}
			else if (ft_islower(str[idx]))
			{
				if (str[idx] >= low_range)
				{
					temp = str[idx] - low_range;
					ft_putchar(temp + 97);
				}
				else
					ft_putchar(str[idx] + cript);
			}
		}
		else
			ft_putchar(str[idx]);
	}
}

bool	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

bool	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

bool	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}
