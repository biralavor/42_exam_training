/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:40:44 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:40:46 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcspn.c"

int main(void)
{
	int result = ft_strcspn("test", "es");

	printf(" result = %d\n", result);
	return(0);
}
