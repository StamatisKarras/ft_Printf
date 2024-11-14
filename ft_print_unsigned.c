#include "ft_printf.h"


int	print_usnigned(unsigned int n)
{
	int count;

	count = 0;
	if (n > 10)
		print_usnigned(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
	return (count);
}
