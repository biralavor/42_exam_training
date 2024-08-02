/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:40:12 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:40:31 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	idx = 0;
	int	c = 0;
	while(reject[c] != '\0' && s[idx] != '\0')
	{
		if (s[idx] == reject[c])
			break;
		idx++;
		c++;
	}
	return(idx);
}
