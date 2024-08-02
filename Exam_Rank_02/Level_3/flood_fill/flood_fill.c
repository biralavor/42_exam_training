/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:24:12 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:24:23 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point begin, char to_fill)
{
	if (begin.x < 0 || begin.x >= size.x
		|| begin.y < 0 || begin.y >= size.y
		|| tab[begin.y][begin.x] != to_fill)
		return ;
	tab[begin.y][begin.x] = 'F';
	fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill);
	fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill);
	fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
