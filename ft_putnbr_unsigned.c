/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 03:46:02 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/27 20:05:27 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_putnbr(int n, int i)
{
	if (n > 9)
		i += ft_print_putnbr(n / 10, i);
	write(1, &"0123456789"[n % 10], 1);
	i++;
	return (i);
}

int		ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		i++;
		n *= -1;
	}
	i += ft_print_putnbr(n, i);
	return (i);
}

int		ft_putnbr_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	i = ft_print_putnbr((int)n, i);
	return (i);
}

char	*ft_set_unsigned_int_dot_n(char *tem_str, t_flags *f)
{
	int		i;
	char	*zero_str;

	i = f->dot_n - ft_strlen(tem_str);
	if (!(zero_str = malloc(sizeof(char) * i)))
		return (0);
	ft_memset(zero_str, 48, i);
	tem_str = ft_strjoin(zero_str, tem_str);
	free(zero_str);
	return (tem_str);
}

int		ft_set_precision_util(char c, t_flags *f, va_list *ap, int i)
{
	if (c == '*')
	{
		f->dot_n = va_arg(*ap, int);
		return (i);
	}
	else if (c == 'i' || c == 'd' || c == 's')
	{
		f->dot_n = 0;
		return (i - 1);
	}
	return (i);
}
