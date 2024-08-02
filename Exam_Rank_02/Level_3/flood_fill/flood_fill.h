/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:24:41 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:25:14 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_point
{
int				x;
int				y;
}				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);
void	fill(char **tab, t_point size, t_point begin, char to_fill);

#endif
