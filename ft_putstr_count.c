/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:45:09 by skarras           #+#    #+#             */
/*   Updated: 2024/11/26 14:10:04 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_str_count(const char *s)
{
	int	count;
	int	temp;
	int	i;

	i = 0;
	if (!s)
	{
		put_str_count("(null)");
		return (6);
	}
	count = ft_strlen(s);
	while (s[i])
	{
		temp = print_char(s[i]);
		if (temp == -1)
			return (-1);
		i++;
	}
	return (count);
}
