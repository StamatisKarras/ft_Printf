#include "ft_printf.h"

int	strlen_count(const char *s)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			i += 2;
		count++;
		i++;
	}
	return (count);
}
