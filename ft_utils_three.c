/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 02:20:49 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 05:02:48 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_exchange_val(int a, int b, t_flags *f)
{
	f->plus = a;
	f->blank = b;
}

int		ft_set_length(t_flags *f, char *arg, int i)
{
	if (arg[i] == 'h')
	{
		if (arg[i + 1] == 'h')
		{
			f->len_h = 2;
			return (i + 1);
		}
		f->len_h = 1;
	}
	else if (arg[i] == 'l')
	{
		if (arg[i + 1] == 'l')
		{
			f->len_l = 2;
			return (i + 1);
		}
		f->len_l = 1;
	}
	return (i);
}

int		ft_change_length_format(char c, va_list *ap, int i, t_flags *f)
{
	int	count;

	count = 0;
	if (f->len_l == 1)
		count = ft_change_l(c, ap, i, f);
	else if (f->len_l == 2)
		count = ft_change_ll(c, ap, i, f);
	else if (f->len_h == 1)
		count = ft_change_h(c, ap, i, f);
	else if (f->len_h == 2)
		count = ft_change_hh(c, ap, i, f);
	return (count);
}

int		cheak_size_u(unsigned long long int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
