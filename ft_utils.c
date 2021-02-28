/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:57:50 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 05:50:58 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_set_flags(void)
{
	t_flags	flags;

	flags.width = 0;
	flags.zero = 0;
	flags.left_sort = 0;
	flags.dot_n = -1;
	flags.plus = 0;
	flags.blank = 0;
	flags.hash = 0;
	flags.len_l = 0;
	flags.len_h = 0;
	return (flags);
}

int		ft_format_spec_check(char f)
{
	return (f == 's' || f == 'c' || f == 'd' || f == 'i' || f == 'p' ||
		f == 'o' || f == 'x' || f == 'X' || f == 'u' || f == '%');
}

int		ft_flag_check(char f)
{
	return (f == '-' || f == ' ' || f == '+' || f == '#' || f == '*' ||
		f == '.' || (f >= 48 && f <= 57) || f == 'l' || f == 'h');
}

int		ft_format_spec(char c, va_list *ap, int i, t_flags *flags)
{
	int		count;

	count = 0;
	if (flags->len_h > 0 || flags->len_l > 0)
		count = ft_change_length_format(c, ap, i, flags);
	else if (c == 's')
		count = ft_handle_str(va_arg(*ap, char *), flags);
	else if (c == 'c')
		count = ft_handle_char((char)va_arg(*ap, int), flags);
	else if (c == 'd' || c == 'i')
		count = ft_handle_int(va_arg(*ap, int), flags);
	else if (c == 'x')
		count = ft_handle_smallx(va_arg(*ap, unsigned int), flags);
	else if (c == 'X')
		count = ft_handle_bigx(va_arg(*ap, unsigned int), flags);
	else if (c == 'o')
		count = ft_handle_o(va_arg(*ap, unsigned int), flags);
	else if (c == 'u')
		count = ft_handle_u(va_arg(*ap, unsigned int), flags);
	else if (c == 'p')
		count = ft_handle_p(va_arg(*ap, char *), flags);
	else if (c == '%')
		count = ft_handle_percent(flags);
	return (count);
}

int		ft_flags(int i, const char *arg, t_flags *f, va_list *ap)
{
	if (arg[i] == '-')
		f->left_sort = 1;
	else if (arg[i] == ' ')
		ft_exchange_val(0, 1, f);
	else if (arg[i] == '+')
		ft_exchange_val(1, 0, f);
	else if (arg[i] == '#')
		f->hash = 1;
	else if (arg[i] == '0')
		f->zero = 1;
	else if (arg[i] == '*')
		ft_set_esterisk(f, ap);
	else if (arg[i] >= 49 && arg[i] <= 57)
		i = ft_width_set(i, arg, f);
	else if (arg[i] == '.' && arg[i + 1])
		i = ft_set_precision((i + 1), (char *)arg, f, ap);
	else if (arg[i] == 'h' || arg[i] == 'l')
		i = ft_set_length(f, (char *)arg, i);
	return (i);
}
