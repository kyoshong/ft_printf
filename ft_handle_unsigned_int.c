/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:20:21 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/26 22:19:10 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_bigx(unsigned int bigx, t_flags *f)
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

int		ft_handle_smallx(unsigned int smallx, t_flags *f)
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

int		ft_handle_u(unsigned int u, t_flags *f)
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

char	*ft_set_unsigned_int_zero(char *str, int width)
{
	char	*empty_str;
	char	*fin_str;

	if (!(empty_str = malloc(sizeof(char) * width)))
		return (NULL);
	ft_memset(empty_str, 48, width);
	if (ft_strlen(str) < 2)
		fin_str = ft_join_signed(str, empty_str, 0);
	else
		fin_str = ft_join_signed(str, empty_str, 2);
	free(empty_str);
	return (fin_str);
}
