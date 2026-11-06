/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:32:33 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/04 09:40:04 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_chars(va_list *args, ssize_t *count)
{
	char	c;

	c = va_arg(*args, int);
	*count += write(1, &c, 1);
}
