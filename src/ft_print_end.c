#include "../ft_printf.h"

void	ft_print_end(char *str, size_t end)
{
	while (end-- > 0)
		write(1, &str[end], 1);
}
