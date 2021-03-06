/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:45:19 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 05:51:09 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cheak_size(long long int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(long long int n)
{
	char			*n_str;
	int				len;
	int				s;
	long long int	num;

	num = n;
	s = 0;
	if (num < 0)
	{
		num = -num;
		s = 1;
	}
	len = cheak_size(num);
	if (!(n_str = (char *)malloc(sizeof(char) * len + s + 1)))
		return (NULL);
	if (s)
		n_str[0] = '-';
	n_str[len + s] = '\0';
	while (len)
	{
		n_str[len - (s ? 0 : 1)] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (n_str);
}
