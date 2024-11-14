#include "ft_printf.h"

int	ft_printf_normal(const char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '%')
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (i);
}
