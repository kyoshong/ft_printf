/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 03:46:02 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/13 03:59:01 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_print_putnbr(int n)
{
	if (n > 9)
		ft_print_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	ft_putnbr_fd(int n)
{

	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	ft_print_putnbr(n);
}

void	ft_putnbr_unsigned(unsigned int n)
{
	ft_print_putnbr(n);
}
