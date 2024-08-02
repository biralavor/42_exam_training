/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:37:37 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:37:45 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "ft_rrange.c"

int	main(void)
{
	int	idx = 0;
	int	*result = NULL;
	int	arr_len, start, end;

	start = 0;
	end = -3;
	arr_len = start > end ? start - end : end - start;
	result = ft_rrange(start, end);
	printf("array = { ");
	while(arr_len >= 0)
	{
		printf("%d, ", result[idx]);
		idx++;
		arr_len--;
	}
	printf(" }");
	printf("\n");
	return (0);
}
