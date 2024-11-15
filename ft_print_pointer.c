#include "ft_printf.h"

int	print_pointer(unsigned long nb, int count)
{
	if (nb == 0)
		return (0);
	if (nb != 0)
	{
		count += print_pointer(nb / 16, count);
		if (nb % 16 <= 9)
			count += print_char(nb % 16 + '0');
		else
			count += print_char(nb % 16 + 'W');
	}
	return (count);
}
