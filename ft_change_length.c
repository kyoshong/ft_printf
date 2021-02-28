/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 03:33:39 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 06:29:27 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_change_l(char c, va_list *ap, int i, t_flags *f)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_handle_long_int(va_arg(*ap, long int), f);
	else if (c == 'x')
		count = ft_handle_long_smallx(va_arg(*ap, unsigned long int), f);
	else if (c == 'X')
		count = ft_handle_long_bigx(va_arg(*ap, unsigned long int), f);
	else if (c == 'o')
		count = ft_handle_long_o(va_arg(*ap, unsigned long int), f);
	else if (c == 'u')
		count = ft_handle_long_u(va_arg(*ap, unsigned long int), f);
	else if (c == 'c')
		count = ft_handle_long_char(va_arg(*ap, wint_t),f);
	else if (c == 's')
		count = ft_handle_long_str(va_arg(*ap, wchar_t *),f);
	return (count);
}

int		ft_change_ll(char c, va_list *ap, int i, t_flags *f)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_handle_long_int(va_arg(*ap, long long int), f);
	else if (c == 'x')
		count = ft_handle_long_smallx(va_arg(*ap, unsigned long long int), f);
	else if (c == 'X')
		count = ft_handle_long_bigx(va_arg(*ap, unsigned long long int), f);
	else if (c == 'o')
		count = ft_handle_long_o(va_arg(*ap, unsigned long long int), f);
	else if (c == 'u')
		count = ft_handle_long_u(va_arg(*ap, unsigned long long int), f);
	return (count);
}

int		ft_change_hh(char c, va_list *ap, int i, t_flags *f)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_handle_int((signed char)va_arg(*ap, int), f);
	else if (c == 'x')
		count = ft_handle_smallx((unsigned char)va_arg(*ap, unsigned int), f);
	else if (c == 'X')
		count = ft_handle_bigx((unsigned char)va_arg(*ap, unsigned int), f);
	else if (c == 'o')
		count = ft_handle_o((unsigned char)va_arg(*ap, unsigned int), f);
	else if (c == 'u')
		count = ft_handle_u((unsigned char)va_arg(*ap, unsigned int), f);
	return (count);
}

int		ft_change_h(char a, va_list *ap, int i, t_flags *f)
{
	int	c;

	c = 0;
	if (a == 'd' || a == 'i')
		c = ft_handle_int((short int)va_arg(*ap, int), f);
	else if (a == 'x')
		c = ft_handle_smallx((unsigned short int)va_arg(*ap, unsigned int), f);
	else if (a == 'X')
		c = ft_handle_bigx((unsigned short int)va_arg(*ap, unsigned int), f);
	else if (a == 'o')
		c = ft_handle_o((unsigned short int)va_arg(*ap, unsigned int), f);
	else if (a == 'u')
		c = ft_handle_u((unsigned short int)va_arg(*ap, unsigned int), f);
	return (c);
}
