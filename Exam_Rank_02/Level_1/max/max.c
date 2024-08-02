/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:50:47 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:50:56 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int	idx = 0;
	int				max_nbr = tab[idx];

	while (idx <= len && tab[idx + 1])
	{
		if (tab[idx] < tab[idx + 1])
			max_nbr = tab[idx + 1];
		idx++;
	}
	if (tab[len] > max_nbr)
		max_nbr = tab[len];
	return(max_nbr);
}
