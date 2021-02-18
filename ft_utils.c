/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:57:50 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/19 02:05:48 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

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
	return (flags);
}

int	ft_format_spec_check(char f)
{
	return (f == 's' || f == 'c' || f == 'd' || f == 'i' || 
			f == 'x' || f == 'X' || f == 'u' || f == 'n' || f == '%');
}

int	ft_flag_check(char f)
{
	return (f == '-' || f == ' ' || f == '+' || f == '#' || 
			f == '0' || f == '*' || f == '.'|| (f >= 48 && f <= 57));
}

int		ft_format_spec(char c, va_list ap, int i, t_flags *flags)
{
	int		count;

	count = 0;
	if (c == 's')
		count = ft_get_str(va_arg(ap, char *), &flags);
	else if (c == 'c')
		count = ft_get_char(va_arg(ap, char), &flags);
	else if (c == 'd' || c == 'i')
		count = ft_get_int(va_arg(ap, int), &flags);
	else if (c == 'x')
		ft_putbase_lower(va_arg(ap, unsigned int));
	else if (c == 'X')
		ft_putbase_upper(va_arg(ap, unsigned int));
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (c == 'n')
		ft_count_n(va_arg(ap, int *), (i - 1));
	else if (c == '%')
	{
		write(1, '%', 1);
		count = 1;
	}
	return (count);
}

int	ft_flags(char i, const char *arg, t_flags f, va_list ap)
{
	if (arg[i] == '-')
		f.left_sort = 1;
	else if (arg[i] == ' ')
		f.blank = 1;
	else if (arg[i] == '+')
		f.plus = 1;
	else if (arg[i] == '#')
		f.hash = 1;
	else if (arg[i] == '0')
		f.zero = 1;
	else if (arg[i] == '*')
	{
		if (f.width != 0)
			return (i);
		f.width = va_arg(ap, int);
	}
	else if (arg[i] >= 49 && arg[i] <= 57)
		i = ft_width_set(i ,arg, &f);
	else if (arg[i] == '.')
		i = ft_set_precision((i + 1), arg, &f);
	return i;
}
