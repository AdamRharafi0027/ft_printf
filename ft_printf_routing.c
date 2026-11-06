/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_routing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:33:00 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/04 16:27:11 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

static void	ft_check_edg(const char *formate, long *count)
{
	if (*formate == '%')
	{
		*count += write(1, "%", 1);
	}
	else if (*formate <= 32 || ft_isalpha(*formate) || ft_isdigit(*formate))
	{
		write(1, "%", 1);
		write(1, formate, 1);
		*count += 2;
	}
}

static void	ft_print_string(va_list *args, ssize_t *count)
{
	char	*str;

	str = va_arg(*args, char *);
	if (!str)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	*count += write(1, str, ft_strlen(str));
}

int	ft_printf_routing(const char *formate, va_list *args, ssize_t *count)
{
	if (*formate == 'c')
		ft_print_chars(args, count);
	else if (*formate == 's')
		ft_print_string(args, count);
	else if (*formate == 'd' || *formate == 'i')
		ft_print_decimal(args, count);
	else if (*formate == 'u')
		ft_print_unsigned(args, count);
	else if (*formate == 'x')
		ft_print_hexa(args, count, 0);
	else if (*formate == 'X')
		ft_print_hexa(args, count, 1);
	else if (*formate == 'p')
		ft_print_pointer(args, count);
	else
		ft_check_edg(formate, count);
	return (*count);
}
