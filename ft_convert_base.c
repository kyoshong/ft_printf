/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 02:38:42 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/26 21:24:05 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_upper_str(unsigned int n)
{
	char	*str;
	char	*base;
	int		i;
	int		len;

	i = 0;
	len = ft_get_base_count(n);
	if (!(str = malloc(sizeof(char) * (len + 2))))
		return (NULL);
	base = "0123456789ABCDEF";
	while (n >= 16)
	{
		str[i] = base[n % 16];
		n /= 16;
		i++;
	}
	str[i++] = base[n];
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

char	*ft_get_lower_str(unsigned int n)
{
	char	*str;
	char	*base;
	int		i;
	int		len;

	i = 0;
	len = ft_get_base_count(n);
	if (!(str = malloc(sizeof(char) * (len + 2))))
		return (NULL);
	base = "0123456789abcdef";
	while (n >= 16)
	{
		str[i] = base[n % 16];
		n /= 16;
		i++;
	}
	str[i++] = base[n];
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

int		ft_count_base(unsigned long n, int i)
{
	if (n > 16)
		i = ft_count_base(n / 16, i);
	i++;
	return (i);
}

int		ft_get_base_count(unsigned long n)
{
	int	i;

	i = 0;
	i = ft_count_base(n, i);
	return (i);
}
