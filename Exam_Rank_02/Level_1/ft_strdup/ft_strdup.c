/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:45:00 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 14:45:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	idx = 0;
	while(str[idx] != '\0')
		idx++;
	return(idx);
}

char	*ft_strdup(char *src)
{
	int		len = ft_strlen(src);
	int		idx = 0;
	char	*dest = (char *)malloc(sizeof(char) * (len + 1));
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return(dest);
}
