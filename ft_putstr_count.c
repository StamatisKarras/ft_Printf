#include "ft_printf.h"

int	put_str_count(const char *s)
{
	int	count;

	count = ft_strlen(s);
	ft_putstr_fd((char *) s, 1);
	return (count);
}
