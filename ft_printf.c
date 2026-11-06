#include "ft_printf.h"

static void	ft_print_text(const char **formate, ssize_t *count)
{
	while (**formate && **formate != '%')
	{
		*count += write(1, *formate, 1);
		(*formate)++;
	}
}

int	ft_printf(const char *formate, ...)
{
	va_list	args;
	ssize_t	count;

	if (!formate || write(1, 0, 0) < 0)
		return (-1);
	va_start(args, formate);
	count = 0;
	while (*formate)
	{
		ft_print_text(&formate, &count);
		if (*formate == '%')
		{
			formate++;
			if (!*formate)
			{
				va_end(args);
				return (-1);
			}
			ft_printf_routing(formate, &args, &count);
			formate++;
		}
	}
	va_end(args);
	return ((int)count);
}
