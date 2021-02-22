/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 02:49:09 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/22 14:36:06 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_handle_p(unsigned long ptr, t_flags *f)
{
	char	*tem_str;
	int		width;
	
	if (!ptr)
		return (0);
	tem_str = ft_get_lower_str(ptr);
	if (f->dot_n > (int)ft_strlen(tem_str))
		tem_str = ft_set_unsigned_int_dot_n(tem_str, f);
	tem_str = ft_strjoin("0x", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->zero)
			tem_str = ft_int_width_set(tem_str, f, width, 48);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

void	ft_handle_ptr_int(int *ptr, int count)
{
	ptr = &count;
}
