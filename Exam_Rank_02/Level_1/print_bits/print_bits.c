/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:00:57 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:01:11 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit = 0;
	int				idx = 8;

	while(--idx >= 0)
	{
		bit = ((octet >> idx) & 1) + '0';
		write(1, &bit, 1);
	}
}
