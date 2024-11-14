#include "ft_printf.h"

int	strlen_count(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			i += 2;
		i++;
	}
	return (i);
}
