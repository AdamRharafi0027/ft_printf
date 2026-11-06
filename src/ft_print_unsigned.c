/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:32:54 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/04 09:35:42 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_unsigned(va_list *args, ssize_t *count)
{
	unsigned int	unsigned_number;

	unsigned_number = va_arg(*args, unsigned int);
	ft_putnbr_base(unsigned_number, "0123456789", count, 1);
}
