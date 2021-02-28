/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlong_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 04:22:47 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 05:51:32 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_long_int(long long int d, t_flags *f)
{
	char	*tem_str;
	int		width;
	int		len;

	if (f->dot_n == 0 && d == 0)
		tem_str = ft_strdup("");
	else
		tem_str = ft_itoa(d);
	len = ft_get_int_len(d, f->dot_n, ft_strlen(tem_str));
	if (len > 0)
		tem_str = ft_int_dot_n_set(tem_str, f, len);
	if (f->blank && d >= 0)
		tem_str = ft_strjoin(" ", tem_str);
	else if (f->plus && d >= 0)
		tem_str = ft_strjoin("+", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->dot_n < 0 && f->zero && f->left_sort == 0)
			tem_str = ft_int_zero_set(tem_str, width);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

int		ft_handle_long_bigx(unsigned long long int bigx, t_flags *f)
{
	char	*tem_str;
	int		width;

	if (bigx == 0 && f->dot_n == 0)
		tem_str = "";
	else
		tem_str = ft_get_upper_str(bigx);
	if (f->dot_n > (int)ft_strlen(tem_str))
		tem_str = ft_set_unsigned_int_dot_n(tem_str, f);
	if (f->hash && bigx > 0)
		tem_str = ft_strjoin("0X", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->dot_n < 0 && f->zero && f->hash && !f->left_sort)
			tem_str = ft_set_unsigned_int_zero(tem_str, width);
		else if (f->dot_n < 0 && f->zero && !f->left_sort)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

int		ft_handle_long_smallx(unsigned long long int smallx, t_flags *f)
{
	char	*tem_str;
	int		width;

	if (smallx == 0 && f->dot_n == 0)
		tem_str = "";
	else
		tem_str = ft_get_lower_str(smallx);
	if (f->dot_n > (int)ft_strlen(tem_str))
		tem_str = ft_set_unsigned_int_dot_n(tem_str, f);
	if (f->hash && smallx > 0)
		tem_str = ft_strjoin("0x", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->dot_n < 0 && f->zero && f->hash && f->left_sort == 0)
			tem_str = ft_set_unsigned_int_zero(tem_str, width);
		else if (f->dot_n < 0 && f->zero && f->left_sort == 0)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

int		ft_handle_long_u(unsigned long long int u, t_flags *f)
{
	char	*tem_str;
	int		width;

	if (u == 0 && f->dot_n == 0)
		tem_str = "";
	else
	{
		tem_str = ft_uitoa(u);
		if (f->dot_n > (int)ft_strlen(tem_str))
			tem_str = ft_set_unsigned_int_dot_n(tem_str, f);
	}
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->dot_n < 0 && f->zero && f->left_sort == 0)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

int		ft_handle_long_o(unsigned long long int oct, t_flags *f)
{
	char	*tem_str;
	int		width;

	if (oct == 0 && f->dot_n == 0)
		tem_str = "";
	else
		tem_str = ft_get_oc_str(oct);
	if (f->dot_n > (int)ft_strlen(tem_str))
		tem_str = ft_set_unsigned_int_dot_n(tem_str, f);
	else if (f->hash && *tem_str != '0')
		tem_str = ft_strjoin("0", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->dot_n < 0 && f->zero && f->hash && f->left_sort == 0)
			tem_str = ft_set_unsigned_o_zero(tem_str, width);
		else if (f->dot_n < 0 && f->zero && f->left_sort == 0)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}
