/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:45:00 by skarras           #+#    #+#             */
/*   Updated: 2024/11/18 08:45:01 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_count(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
