# ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"
#include <stdio.h>

int	ft_printf_normal(const char *s);
int ft_printf(const char *s, ...);
int	sorting_hat(const char *s, va_list args);
int	print_char(int c);
int	putnbr_count(int n);
int	put_str_count(const char *s);
int	strlen_count(const char *s);
int	print_usnigned(unsigned int n);
int	hexa_lower(int nb);
int	hexa_upper(int nb);

#endif
