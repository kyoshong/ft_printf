/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:46:00 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/22 20:55:44 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
#include <stdio.h>

int	ft_make_format(va_list ap, int i, char *arg)
{
	t_flags	flags;
	int		count;
	
	count = 0;
	while (arg[i])
	{
		flags = ft_set_flags();
		if (arg[i] == '%' && arg[i + 1])
		{
			while (!ft_format_spec_check(arg[i]) && ft_flag_check(arg[i]))
			{
				i = ft_flags(i, arg, &flags, ap);
				i++;
			}
			if (ft_format_spec_check(arg[i]))
				count += ft_format_spec(arg[i], ap, i, &flags);
			else
				return (-1);
		}
		else if(arg[i] != '%')
		{
			write(1, &arg[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int		ft_printf(const char *arg, ...)
{
	va_list		ap;
	char	*copy;
	int			count;

	if (!arg)
		return (-1);
	copy = ft_strdup(arg);
	va_start(ap, arg);
	count = ft_make_format(ap, 0, copy);
	va_end(ap);
	return (count);
}

int	main()
{
	int	b = 1;
	int a = ft_printf("%d", b);
	printf("\n%d", a);
	return (0);
}