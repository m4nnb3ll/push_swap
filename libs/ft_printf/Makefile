NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_b.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
