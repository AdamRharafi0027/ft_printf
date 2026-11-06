/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:32:41 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/04 09:35:36 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_decimal(va_list *args, ssize_t *count)
{
	int	number;

	number = va_arg(*args, int);
	ft_putnbr_base(number, "0123456789", count, 0);
}
