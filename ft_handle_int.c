/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 02:06:25 by hyospark          #+#    #+#             */
/*   Updated: 2021/03/01 05:37:37 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_int(int d, t_flags *f)
{
	char	*tem_str;
	int		width;
	int		len;

	if (f->dot_n == 0 && d == 0)
		tem_str = ft_strdup("");
	else
		tem_str = ft_itoa(d);
	len = ft_get_int_len(d, f->dot_n, ft_strlen(tem_str));
	if (len > 0)
		tem_str = ft_int_dot_n_set(tem_str, f, len);
	if (f->blank && d >= 0)
		tem_str = ft_strjoin(" ", tem_str);
	else if (f->plus && d >= 0)
		tem_str = ft_strjoin("+", tem_str);
	if ((width = f->width - ft_strlen(tem_str)) > 0)
	{
		if (f->dot_n < 0 && f->zero && f->left_sort == 0)
			tem_str = ft_int_zero_set(tem_str, width);
		else
			tem_str = ft_int_width_set(tem_str, f, width, 32);
	}
	ft_putstr_fd(tem_str, 1);
	return (ft_strlen(tem_str));
}

char	*ft_int_dot_n_set(char *tem_str, t_flags *f, int i)
{
	char	*zero_str;

	if (!(zero_str = malloc(sizeof(char) * i)))
		return (NULL);
	ft_memset(zero_str, 48, i);
	if (tem_str[0] == '-')
		tem_str = ft_join_signed(tem_str, zero_str, 1);
	else
		tem_str = ft_strjoin(zero_str, tem_str);
	free(zero_str);
	return (tem_str);
}

char	*ft_int_zero_set(char *str, int width)
{
	char	*empty_str;
	char	*fin_str;

	if (!(empty_str = malloc(sizeof(char) * width)))
		return (NULL);
	ft_memset(empty_str, 48, width);
	if (str[0] > 48 && str[0] <= 57)
		fin_str = ft_strjoin(empty_str, str);
	else
		fin_str = ft_join_signed(str, empty_str, 1);
	free(empty_str);
	return (fin_str);
}

char	*ft_int_width_set(char *str, t_flags *f, int width, int set)
{
	char	*empty_str;
	char	*fin_str;

	if (!(empty_str = malloc(sizeof(char) * (width + 1))))
		return (NULL);
	ft_memset(empty_str, set, width);
	if (f->left_sort)
		fin_str = ft_strjoin(str, empty_str);
	else
		fin_str = ft_strjoin(empty_str, str);
	free(empty_str);
	return (fin_str);
}

char	*ft_join_signed(char *str, char *zero, int size)
{
	char	*n_str;
	int		i;
	int		j;

	if (!str && !zero)
		return (NULL);
	if (!(n_str = (char *)malloc(ft_strlen(str) + ft_strlen(zero) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (j < size)
		n_str[i++] = str[j++];
	while (*zero != '\0')
		n_str[i++] = *zero++;
	while (str[size] != '\0')
		n_str[i++] = str[size++];
	n_str[i] = '\0';
	return (n_str);
}
