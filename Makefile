NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	./src/ft_print_chars.c\
		./src/ft_strlen.c\
		./src/ft_print_decimal.c\
		./src/ft_putnbr_base.c\
		./src/ft_print_pointer.c\
		./src/ft_print_hexa.c\
		./src/ft_print_unsigned.c\
		./src/ft_copy_num.c\
		./src/ft_print_end.c\
		./ft_printf_routing.c\
		./ft_printf.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONEY: all clean fclean re
