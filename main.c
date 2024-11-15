#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	z;
	void *ptr;

	ptr = &i;
	i = ft_printf("The Hexadecimal: %p\n", ptr);
	ft_printf("The length is: %i\n", i);
	z = printf("The Hexadecimal: %p\n", ptr);
	printf("The length is: %i\n", i);
	i = ft_printf("The Hexadecimal: %X\n", 2748);
	ft_printf("The length is: %i\n", i);
	z = printf("The Hexadecimal: %X\n", 2748);
	printf("The length is: %i\n", i);
	return (0);
}
