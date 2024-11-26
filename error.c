#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	close(1);
	i = ft_printf("%s\n");
	dprintf(2, "%d\n", i);
	return (0);
}
:
