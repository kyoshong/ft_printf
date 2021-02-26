/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 02:49:09 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/26 16:13:01 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_handle_p(unsigned long ptr, t_flags *f)
{
	char	*tem_str;
	int		width;

	if (!ptr && f->dot_n == 0)
		tem_str = ft_strdup("");
	else
		tem_str = ft_get_ptr_str(ptr);
	if (f->dot_n > (int)ft_strlen(tem_str))
		tem_str = ft_set_unsigned_int_dot_n(tem_str, f);
	tem_str = ft_strjoin("0x", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->zero && f->left_sort == 0)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	width = ft_strlen(tem_str);
	free(tem_str);
	return (width);
}

char	*ft_get_ptr_str(unsigned int n)
{
	char	*str;
	char	*base;
	int		i;
	int		len;

	i = 0;
	len = ft_get_base_count(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	base = "0123456789abcdef";
	while (n > 16)
	{
		str[i] =  base[n % 16];
		n /= 16;
		i++;
	}
	str[i++] = base[n];
	str[i] = '\0';
	str = ft_strrev(str);
	//str = ft_strjoin("10", str);
	return (str);
}

void	ft_handle_ptr_int(int *ptr, int count)
{
	*ptr = count;
}

int		ft_handle_percent(t_flags *f)
{
	char	*tem_str;
	int		width;

	tem_str = "%";
	if ((width = f->width - 1) > 0)
	{
		if (f->zero && f->left_sort == 0)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
		ft_putstr_fd(tem_str, 1);
		width = ft_strlen(tem_str);
		free(tem_str);
		return (width);
	}
	ft_putchar_fd('%', 1);
	return (1);
}
