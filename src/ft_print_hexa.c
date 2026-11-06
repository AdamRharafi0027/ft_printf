/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:19:47 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/04 09:35:48 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hexa(va_list *args, ssize_t *count, int flag)
{
	unsigned int	number;

	number = (unsigned int)va_arg(*args, unsigned int);
	if (flag)
		ft_putnbr_base(number, "0123456789ABCDEF", count, 1);
	else
		ft_putnbr_base(number, "0123456789abcdef", count, 1);
}
