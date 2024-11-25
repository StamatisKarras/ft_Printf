/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:46:56 by skarras           #+#    #+#             */
/*   Updated: 2024/11/25 15:31:53 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sorting_hat(const char *s, va_list args)
{
	void	*p;

	if (*s == 'c')
		return (print_char(va_arg(args, int)));
	else if (*s == 'i' || *s == 'd')
		return (putnbr_count(va_arg(args, int)));
	else if (*s == 's')
		return (put_str_count(va_arg(args, char *)));
	else if (*s == 'u')
		return (print_usnigned(va_arg(args, unsigned int), 0));
	else if (*s == 'x')
		return (print_hex(va_arg(args, unsigned int), 'x'));
	else if (*s == 'X')
		return (print_hex(va_arg(args, unsigned int), 'X'));
	else if (*s == '%')
		return (print_char('%'));
	else if (*s == 'p')
	{
		p = va_arg(args, void *);
		if (p == NULL)
			return (put_str_count("(nil)"));
		return (put_str_count("0x") + print_pointer((unsigned long) p, 0));
	}
	return (-1);
}

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			count;
	int			i;
	int			temp;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		temp = ft_printf_normal(&s[i]);
		i += temp;
		if (s[i] == '%')
		{
			temp = sorting_hat(&s[i + 1], args);
			if (temp == -1)
				return (-1);
			count += temp;
			i += 2;
		}
	}
	va_end(args);
	count += (strlen_count(s));
	return (count);
}
