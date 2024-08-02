/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:43:16 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:45:54 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strdup.c"

int	main(void)
{
	char *str = "Mussum Ipsum, cacilds vidis litro abertis.\n";
	char *copy = ft_strdup(str);
	printf("copy = %s", copy);
	return (0);
}
