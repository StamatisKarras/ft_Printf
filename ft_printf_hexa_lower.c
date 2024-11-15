#include "ft_printf.h"

int	hexa_lower(unsigned int  nb)
{
	int count;

	count = 0;
	if (nb == 0)
		return (0);
	if (nb != 0)
	{
		hexa_lower(nb / 16);
		if (nb % 16 <= 9)
			count += print_char(nb % 16 + '0');
		else
			count += print_char(nb % 16 + 'W');
	}
	return (count);
}
