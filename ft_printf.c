/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:46:00 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/19 02:18:16 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_make_format(va_list *ap, int i, const char *arg)
{
	t_flags	flags;
	int		count;
	
	flags = ft_flags_set();
	while (!ft_format_spec_check(arg[i]))
	{
		if (ft_flag_check(arg[i]))
		{
			i = ft_flags(i, arg, flags, ap);
			i++;
		}
		else
			return (count);
	}
	if (ft_format_spec_check(arg[i]))
		count += ft_format_spec(arg[i], ap, i, &flags);
	return (count);
}

int ft_printf(const char *arg, ...)
{
	va_list		ap;
	int			i;
	const char	*copy;
	int			count;

	i = 0;
	if (arg == "")
		return (0);
	copy = ft_strdup(arg);
	va_start(ap, copy);
	while (copy[i])
	{
		if (copy[i] == '%' && copy[i + 1])
			count += ft_make_format(ap, ++i, copy);
		else if(copy[i] != '%')
		{
			write(1, &copy[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}

// int main(int argc, char const *argv[])
// {
// 	int a;
// 	a = 10;
// 	ft_printf("a : cspdiuxX", a);
// 	//모든 서식문자에서 ‘-0.*’ 플래그와 최소 필드 너비의 조합을 
// 	어떤 조합도 처리할 것입니다.
// 	//실제 printf 함수와 비교될 것입니다.
// 	return 0;
// }
/*
보너스 파트

다음 서식 지정자 중 하나 이상을 구현하십시오 : nfge
다음 플래그 중 하나 이상을 구현하십시오 : l ll h hh
다음 플래그를 모두 구현하십시오 : '# +' (플래그 중 하나는 공백이 맞습니다.)
*/