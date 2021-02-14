/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:57:50 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/13 22:56:31 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

t_flags	ft_flags_set(void)
{
	t_flags	flags;
	
	flags.width = 0;
	flags.zero = 0;
	flags.left_sort = 0;
	flags.dot_n = 0;
	flags.plus = 0;
	flags.blank = 0;
	flags.cross = 0;
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

void	ft_format_spec(char c, va_list ap, int i)
{
	if (c == 's')
		ft_putchar_fd(va_arg(ap, char *), 1);
	else if (c == 'c')
		ft_putstr_fd(va_arg(ap, char), 1);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(ap, int));
	else if (c == 'x')
		ft_putbase_lower(va_arg(ap, unsigned int));
	else if (c == 'X')
		ft_putbase_upper(va_arg(ap, unsigned int));
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (c == 'n')
		ft_count_n(va_arg(ap, int *), (i - 1));
	else if (c == '%')
		write(1, '%', 1);
}

void	ft_flags(char c, t_flags f)
{
	if (c == '-')
		f.left_sort = 1;
	if (c == ' ')
		f.blank = 1;
	if (c == '+')
		f.plus = 1;
	if (c == '#')
		f.cross = 1;
	if (c == '0')
		f.zero = 1;
	if (c == '*')
		f.star = 1;
	else if (c >= 49 && c <= 57)
		f.width = -1;
	if (c == '.')
		f.dot_n = -1;
}
