/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 02:38:42 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/19 13:47:33 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_print_base_upper(unsigned int n, char *stack, int i)
{
	char	*base;

	base = "0123456789ABCDEFG";
	if (n > 16)
	{
		stack = ft_print_base_upper(n / 16, stack, i);
		i++;
	}
	stack[i] =  base[n % 16];
	i++;
	return (stack);
}

void	ft_putbase_upper(unsigned int n)
{
	char	*stack;
	int		len;

	len = ft_get_base_count(n);
	if (!(stack = malloc(sizeof(char) * (len + 1))));
		return (0);
	stack = ft_print_base_upper(n, stack, 0);
}

int		ft_count_base(unsigned int n, int i)
{
	if (n > 16)
		i = ft_count_base(n / 16, i);
	i++;
	return (i);
}

int		ft_get_base_count(unsigned int n)
{
	int	i;
	i = 0;
	i = ft_count_base(n, i);
	return (i);
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