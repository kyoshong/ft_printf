/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:20:21 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/20 20:20:41 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_handle_bigx(unsigned int bigx, t_flags *f)
{
	char	*tem_str;
	int		i;
	int		width;
	
	if (bigx == 0 && f->dot_n == 0)
	{
		ft_putstr_fd("", 1);
		return (1);
	}
	tem_str = ft_get_upper_str(bigx);
	if (f->dot_n > ft_strlen(tem_str))
		tem_str = ft_unsigned_int_dot_n_set(tem_str, &f);
	if (f->hash)
		tem_str = ft_strjoin("0X", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if(f->zero && f->hash)
			tem_str = ft_unsigned_int_zero_set(tem_str, width);
		else if (f->zero)
			tem_str = ft_int_width_set(tem_str, &f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, &f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

int		ft_handle_smallx(unsigned int smallx, t_flags *f)
{
	char	*tem_str;
	int		i;
	int		width;
	
	if (smallx == 0 && f->dot_n == 0)
	{
		ft_putstr_fd("", 1);
		return (1);
	}
	tem_str = ft_get_lower_str(smallx);
	if (f->dot_n > ft_strlen(tem_str))
		tem_str = ft_unsigned_int_dot_n_set(tem_str, &f);
	if (f->hash)
		tem_str = ft_strjoin("0x", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if(f->zero && f->hash)
			tem_str = ft_unsigned_int_zero_set(tem_str, width);
		else if (f->zero)
			tem_str = ft_int_width_set(tem_str, &f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, &f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

int		ft_handle_u(unsigned int u, t_flags *f)
{
	char	*tem_str;
	int		i;
	int		width;
	
	if (u == 0 && f->dot_n == 0)
	{
		ft_putstr_fd("", 1);
		return (1);
	}
	tem_str = ft_get_lower_str(u);
	if (f->dot_n > ft_itoa(tem_str))
		tem_str = ft_unsigned_int_dot_n_set(tem_str, &f);
	if (f->hash)
		tem_str = ft_strjoin("0x", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if(f->zero && f->hash)
			tem_str = ft_unsigned_int_zero_set(tem_str, width);
		else if (f->zero)
			tem_str = ft_int_width_set(tem_str, &f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, &f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}


char	*ft_unsigned_int_zero_set(char *str, int width)
{
	char	*empty_str;
	char	*fin_str;

	if (!(empty_str = malloc(sizeof(char) * (width + 1))))
		return ;
	empty_str = ft_memset(empty_str, 48, width);
	fin_str = ft_join_signed(str, empty_str, 2);
	free(empty_str);
	return (fin_str);
}


char	*ft_unsigned_int_dot_n_set(char *tem_str, t_flags *f)
{
	int		i;
	char	*zero_str;

	i = f->dot_n - ft_strlen(tem_str);
	if (!(zero_str = malloc(sizeof(char) * (i + 1))))
		return ;
	ft_memset(zero_str, 48, i);
	tem_str = ft_strjoin(zero_str, tem_str);
	free(zero_str);
	return (tem_str);
}
