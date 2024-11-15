#include "ft_printf.h"

int	main(void)
{
	int i;

	i = printf("Number: %d\n %z", 1, 2);
	printf("%d\n", i);
	return (0);
}
