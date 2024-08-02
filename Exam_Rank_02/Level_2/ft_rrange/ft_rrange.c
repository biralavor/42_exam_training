/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:37:10 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:37:19 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	arr_len;
	int	idx;
	int	*result;
	int	temp;

	arr_len = start > end ? start - end : end - start;
	result = (int *)malloc(sizeof(int) * (arr_len + 1));
	//temp = start < end ? end : start;
	idx = 0;
	if (start < end)
	{
		temp = end;
		while (arr_len >= idx)
		{
			result[idx] = temp;
			idx++;
			temp--;
		}
	}
	if (start > end)
	{
		temp = end;
		while (arr_len >= idx)
		{
			result[idx] = temp;
			idx++;
			temp++;
		}
	}
	return(result);
}
