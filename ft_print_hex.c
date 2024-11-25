/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:38:53 by skarras           #+#    #+#             */
/*   Updated: 2024/11/25 15:38:54 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long long nb, char type)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += print_hex(nb / 16, type);
		count += print_hex(nb % 16, type);
	}
	else
	{
		if (nb < 10)
			count += print_char(nb + '0');
		else
		{
			if (type == 'x')
				count += print_char((nb - 10) + 'a');
			else if (type == 'X')
				count += print_char((nb - 10) + 'A');
		}
	}
	return (count);
}
