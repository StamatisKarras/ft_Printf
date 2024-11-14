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
