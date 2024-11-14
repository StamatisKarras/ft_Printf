#include "ft_printf.h"

int	hexa_upper(int nb)
{
	int count;

	count = 0;
	if (nb == 0)
		return (0);
	if (nb != 0)
	{
		hexa_upper(nb / 16);
		if (nb % 16 <= 9)
			count += print_char(nb % 16 + '0');
		else
			count += print_char(nb % 16 + '7');
	}
	return (count);
}
