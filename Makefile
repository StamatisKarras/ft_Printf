NAME = printf

CC = cc
CFLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

LIBFT = libft/libft.a

SRC = ft_print_char.c \
	  ft_printf_normal.c \
	  ft_printf.c \
	  ft_putnbr_count.c \
	  ft_strlen_count.c \
	  ft_putstr_count.c \
	  ft_print_unsigned.c \
	  ft_printf_hexa_lower.c \
	  ft_print_hex_upper.c

MAIN = main.c

OBJ = $(SRC:.c=.o) $(MAIN:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c $(HEADER) $(LIBFT)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

