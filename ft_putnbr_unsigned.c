/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 03:46:02 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/26 21:30:43 by hyospark         ###   ########.fr       */
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

int	ft_putnbr(int n)
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
