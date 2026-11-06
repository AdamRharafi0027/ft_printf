#include "../ft_printf.h"

size_t	ft_copy_num(char *dest, long number, char *base)
{
	size_t	i;
	size_t	base_len;

	i = 0;
	base_len = ft_strlen(base);
	while (number)
	{
		dest[i++] = base[number % base_len];
		number /= base_len;
	}
	return (i);
}
