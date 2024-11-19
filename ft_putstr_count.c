/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:45:09 by skarras           #+#    #+#             */
/*   Updated: 2024/11/19 10:54:39 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_str_count(const char *s)
{
	int	count;

	if(!s)
	{
		put_str_count("(null)");
		return(6);
	}
	count = ft_strlen(s);
	ft_putstr_fd((char *) s, 1);
	return (count);
}
