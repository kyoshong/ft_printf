/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:46:00 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/16 23:59:34 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	ft_make_format(va_list ap, int i, char *arg)
{
	t_flags		flags;
	
	flags = ft_flags_set();
	while (!ft_format_spec_check(arg[i]))
	{
		if (ft_flag_check(arg[i]))
		{
			i = ft_flags(i, arg, flags, ap);
			i++;
		}
		else
			return ;
	}
	if (ft_format_spec_check(arg[i++]))
		ft_format_spec(arg[i], ap, i);
}

int ft_printf(const char *arg, ...)
{
	va_list		ap;
	int			i;
	static int	word_count;

	word_count = 0;
	i = 0;
	va_start(ap, arg);
	while (arg[i])
	{
		if (arg[i] == '%' && arg[i + 1])
		{
			ft_make_format(ap, i, *arg);
		}
		else if(arg[i] != '%')
			write(1, &arg[i], 1);
		i++;
	}
	va_end(ap);
	return (g_return_num);
}

// int main(int argc, char const *argv[])
// {
// 	int a;

// 	a = 10;
// 	ft_printf("a : cspdiuxX", a);
// 	//모든 서식문자에서 ‘-0.*’ 플래그와 최소 필드 너비의 조합을 어떤 조합도 처리할 것입니다.
// 	//실제 printf 함수와 비교될 것입니다.
// 	return 0;
// }
