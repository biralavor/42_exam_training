/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:01:55 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:02:24 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

bool	ft_isblank(int c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(char *str)
{
    int	nbr = 0;

    if (ft_isdigit(str[0]))
    {
        while (*str)
        {
            nbr *= 10;
            nbr += *str - 48;
            str++;
        }
    }
    return (nbr);
}

void	ft_putchar(int c)
{
    write(1, &c, 1);
}

void	print_hex(int nbr)
{
    const char	*hex = "0123456789abcdef";
    if (nbr >= 16)
    {
        print_hex(nbr / 16);
        print_hex(nbr % 16);
    }
    else
        ft_putchar(hex[nbr]);
}


int	main (int argc, char **argv)
{
    if (argc == 2 && ft_isdigit(*argv[1]))
    {
        print_hex(ft_atoi(argv[1]));
    }
    write(1, "\n", 1);
    return (0);
}
