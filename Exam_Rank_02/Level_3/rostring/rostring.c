/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:08:50 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:09:25 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	idx = 0;
	while(s[idx] != '\0')
		idx++;
	return (idx);
}

bool	ft_isblank(int c)
{
	return(c == 32 || (c >= 9 && c <= 13));
}

bool	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || ft_isblank(c));
}

char	*do_only_one_space(char *s)
{
	char	*new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	int		c = 0;
	int		idx = 0;
	while (s && ft_isblank(s[c]))
		c++;
	while (s[c] != '\0')
	{
		while (ft_isblank(s[c]) && ft_isblank(s[c + 1]))
			c++;
		new_str[idx] = s[c];
		c++;
		idx++;
	}
	if (new_str[idx - 1] == 32)
		new_str[idx - 1] = '\0';
	new_str[idx] = '\0';
	return (new_str);
}

void	rostring(char *av)
{
	char	*new_str = do_only_one_space(av);
	int		idx = 0;
	int		start = 0;
	int		end = 0;
	int		len = ft_strlen(new_str);
	while (new_str[idx] != '\0' && !ft_isblank(new_str[idx]))
		idx++;
	start = idx;
	end = idx;
	idx = 0;
	if (ft_isblank(new_str[start]))
		start++;
	while(start < len)
	{
		write(1, &new_str[start], 1);
		start++;
		if (start == len)
			write(1, " ", 1);
	}
	while(end > idx)
	{
		write(1, &new_str[idx], 1);
		idx++;
	}
}

int	main(int ac, char **av)
{
	int	idx = 0;
	int	c = 0;
	if (ac > 1)
	{
		while (av[idx] != NULL)
		{
			if (ft_isalpha(av[idx][c]))
			{
				rostring(av[1]);
			}
			idx++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
