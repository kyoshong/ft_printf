/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:15:21 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/22 14:34:39 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_handle_str(char *str, t_flags *f)
{
	char	*empty_str;
	char	*fin_str;
	int		width;

	if (f->dot_n == 0)
	{
		ft_putstr_fd("", 1);
		return (1);
	}
	if (f->dot_n > 0)
		str[f->dot_n] = '\0';
	if ((width = f->width - ft_strlen(str)) > 0)
	{
		if (!(empty_str = malloc(sizeof(char) * (width + 1))))
			return (0);
		ft_memset(empty_str, 32, width);
		if (f->left_sort)
			fin_str = ft_strjoin(str, empty_str);
		else
			fin_str = ft_strjoin(empty_str, str);
		free(empty_str);
		ft_putstr_fd(fin_str, 1);
		return (ft_strlen(fin_str));
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int		ft_handle_char(char c, t_flags *f)
{
	char	*empty_str;
	char	*fin_str;
	int		width;

	if ((width = f->width - 1) > 0)
	{
		if (!(empty_str = malloc(sizeof(char) * (width + 1))))
			return (0);
		ft_memset(empty_str, 32, width);
		if (f->left_sort)
			fin_str = ft_strjoin(&c, empty_str);
		else
			fin_str = ft_strjoin(empty_str, &c);
		free(empty_str);
		ft_putstr_fd(fin_str, 1);
		return (ft_strlen(fin_str));
	}
	ft_putchar_fd(c, 1);
	return (1);
}

