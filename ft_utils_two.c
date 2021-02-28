/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 22:22:17 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 05:44:35 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width_set(int i, const char *arg, t_flags *flags)
{
	char	*tem;
	int		j;
	int		backup;

	backup = i;
	if (flags->width != 0)
		return (i);
	j = 0;
	while (arg[i] >= 48 && 57 >= arg[i])
	{
		i++;
		j++;
	}
	if (!(tem = malloc((sizeof(char) * (j + 1)))))
		return (0);
	j = 0;
	while (i > backup)
		tem[j++] = arg[backup++];
	tem[j] = '\0';
	flags->width = ft_atoi(tem);
	free(tem);
	return (i - 1);
}

int		ft_set_precision(int i, char *arg, t_flags *f, va_list *ap)
{
	char	*tem;
	int		j;
	int		backup;

	backup = i;
	if (arg[i] == 'i' || arg[i] == 'd' || arg[i] == 's' || arg[i] == '*')
	{
		i = ft_set_precision_util(arg[i], f, ap, i);
		return (i);
	}
	while (arg[i] >= 48 && 57 >= arg[i])
		i++;
	if (!(tem = (char *)malloc((sizeof(char) * i) + 1)))
		return (0);
	j = 0;
	while (i > j)
		tem[j++] = arg[backup++];
	tem[j] = '\0';
	f->dot_n = ft_atoi(tem);
	free(tem);
	return (i - 1);
}

char	*ft_uitoa(unsigned long long int n)
{
	char					*n_str;
	int						len;
	unsigned long long int	num;

	num = n;
	len = cheak_size_u(num);
	if (!(n_str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	n_str[len] = '\0';
	while (len)
	{
		n_str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (n_str);
}

void	ft_set_esterisk(t_flags *f, va_list *ap)
{
	if ((f->width = va_arg(*ap, int)) < 0)
	{
		f->width *= -1;
		f->left_sort = 1;
	}
}

int		ft_get_int_len(long long int d, int dot_n, int len)
{
	if (d < 0)
		len = dot_n - (len - 1);
	else
		len = dot_n - len;
	return (len);
}
