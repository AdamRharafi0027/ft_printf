#include "../ft_printf.h"

static void	ft_print_address(void *ptr, long *count)
{
	size_t			i;
	char			*hexa;
	char			tab[20];
	unsigned long	number;

	hexa = "0123456789abcdef";
	number = (unsigned long)ptr;
	if (number == 0)
	{
		*count += write(1, "(nil)", 5);
		return ;
	}
	i = ft_copy_num(tab, number, hexa);
	*count += i;
	*count += write(1, "0x", 2);
	ft_print_end(tab, i);
}

void	ft_print_pointer(va_list *args, ssize_t *count)
{
	void	*ptr;

	ptr = va_arg(*args, void *);
	ft_print_address(ptr, count);
}
