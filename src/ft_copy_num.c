/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 06:23:50 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/07 06:23:51 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
