/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:46:00 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/12 22:29:54 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

int	ft_flag(char f)
{
	
}

int	ft_format_spec(const char c, va_list ap)
{
	if (c == 's')
		ft_putchar_fd(va_arg(ap, char *), 1);
	else if (c == 'c')
		ft_putstr_fd(va_arg(ap, char), 1);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (c == 'f')
		ft_

}

int ft_printf(const char *arg, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, arg);
	while (arg[i])
	{
		if (arg[i] == '%')
		{
			ft_format_spec(arg[++i], ap);
		}
		write(1, arg[i], 1);
		i++;
	}
	va_end(ap);
}

int main(int argc, char const *argv[])
{
	int a;

	a = 10;
	ft_printf("a : %d", a);
	return 0;
}
