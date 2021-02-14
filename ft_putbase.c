/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 02:38:42 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/13 18:48:16 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base_upper(unsigned int n)
{
	if (n > 16)
		ft_print_base_upper(n / 16);
	write(1, &"0123456789ABCDEFG"[n % 16], 1);
}

void	ft_putbase_upper(unsigned int n)
{
	ft_print_base_lower(n);
}

void	ft_print_base_lower(unsigned int n)
{
	if (n > 16)
		ft_print_base_lower(n / 16);
	write(1, &"0123456789abcdefg"[n % 16], 1);
}

void	ft_putbase_lower(unsigned int n)
{
	ft_print_base_lower(n);
}