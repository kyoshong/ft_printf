/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:15:19 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/26 14:58:23 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_o(unsigned int oct, t_flags *f)
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
		if(f->dot_n < 0 && f->zero && f->hash && f->left_sort == 0)
			tem_str = ft_set_unsigned_o_zero(tem_str, width);
		else if (f->dot_n < 0 && f->zero && f->left_sort == 0)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

char	*ft_set_unsigned_o_zero(char *str, int width)
{
	char	*empty_str;
	char	*fin_str;

	if (!(empty_str = malloc(sizeof(char) * width)))
		return (NULL);
	ft_memset(empty_str, 48, width);
	fin_str = ft_join_signed(str, empty_str, 0);
	free(empty_str);
	return (fin_str);
}

char	*ft_get_oc_str(unsigned int n)
{
	char	*str;
	char	*base;
	int		i;
	int		len;

	i = 0;
	len = ft_get_base_count_oc(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	base = "01234567";
	while (n > 8) 
	{
		str[i] =  base[n % 8];
		n /= 8;
		i++;
	}
	str[i++] = base[n];
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

int		ft_count_base_oc(unsigned int n, int i)
{
	if (n > 8)
		i = ft_count_base(n / 8, i);
	i++;
	return (i);
}

int		ft_get_base_count_oc(unsigned int n)
{
	int	i;
	
	i = 0;
	i = ft_count_base_oc(n, i);
	return (i);
}

