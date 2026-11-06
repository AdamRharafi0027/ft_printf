#include "../ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, ssize_t *count, int is_unsign)
{
	char			nbr_final[100];
	int				i;
	unsigned int	n;

	i = 0;
	if (nbr == 0)
	{
		*count += write(1, "0", 1);
		return ;
	}
	if (is_unsign)
		n = (unsigned int)nbr;
	else
	{
		if (nbr < 0)
		{
			*count += write(1, "-", 1);
			n = (unsigned int)(-(long)nbr);
		}
		else
			n = (unsigned int)nbr;
	}
	i += ft_copy_num(nbr_final, n, base);
	*count += i;
	ft_print_end(nbr_final, i);
}
