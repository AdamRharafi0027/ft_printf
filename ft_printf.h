/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:33:08 by arharafi          #+#    #+#             */
/*   Updated: 2026/11/02 15:45:34 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// ======= Main Function ========= //
int		ft_printf(const char *formate, ...);
// ======= Routing Function ========= //
int		ft_printf_routing(const char *formate, va_list *args, ssize_t *count);
// ========  SRC =========== //
void	ft_print_chars(va_list *args, ssize_t *count);
size_t	ft_strlen(const char *s);
void	ft_print_decimal(va_list *args, ssize_t *count);
void	ft_putnbr_base(int nbr, char *base, ssize_t *count, int is_unsign);
void	ft_print_hexa(va_list *args, ssize_t *count, int flag);
void	ft_print_pointer(va_list *args, ssize_t *count);
void	ft_print_unsigned(va_list *args, ssize_t *count);
size_t	ft_copy_num(char *dest, long number, char *base);
void	ft_print_end(char *str, size_t end);

#endif
