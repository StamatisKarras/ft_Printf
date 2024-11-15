#include "ft_printf.h"

int	hexa_upper(unsigned int  nb, int count)
{
	if (nb == 0)
		return (0);
	if (nb != 0)
	{
		count += hexa_upper(nb / 16, count);
		if (nb % 16 <= 9)
			count += print_char(nb % 16 + '0');
		else
			count += print_char(nb % 16 + '7');
	}
	return (count);
}
