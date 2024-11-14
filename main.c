#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	z;

	i = ft_printf("The Hexadecimal: %x\n", 2748);
	ft_printf("The length is: %i\n", i);
	z = printf("The Hexadecimal: %x\n", 2748);
	printf("The length is: %i\n", i);
	i = ft_printf("The Hexadecimal: %X\n", 2748);
	ft_printf("The length is: %i\n", i);
	z = printf("The Hexadecimal: %X\n", 2748);
	printf("The length is: %i\n", i);
	return (0);
}
