/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_normal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:32 by skarras           #+#    #+#             */
/*   Updated: 2024/11/26 09:43:49 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_normal(const char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '%')
	{
		print_char(s[i]);
		i++;
	}
	return (i);
}
