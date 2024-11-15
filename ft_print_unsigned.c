#include "ft_printf.h"


int	print_usnigned(unsigned int n, int count)
{
	if (n > 10)
		count += print_usnigned(n / 10, count);
	count += print_char(n % 10 + '0');
	return (count);
}
