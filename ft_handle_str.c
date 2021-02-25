/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_str->c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:15:21 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/25 17:35:10 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_handle_str(char *str, t_flags *f)
{
	char	*empty_str;
	char	*fin_str;
	int		width;

	if (!str)
		fin_str = "(null)";
	else
		fin_str = ft_strdup(str);
	if (ft_strlen(fin_str) > f->dot_n && f->dot_n > 0)
		fin_str[f->dot_n] = '\0';
	if (f->dot_n == 0)
		fin_str = "";
	if ((width = f->width - ft_strlen(fin_str)) > 0)
	{
		if (!(empty_str = malloc(sizeof(char) * width)))
			return (0);
		ft_memset(empty_str, 32, width);
		if (f->left_sort)
			fin_str = ft_strjoin(fin_str, empty_str);
		else
			fin_str = ft_strjoin(empty_str, fin_str);
		free(empty_str);
	}
	ft_putstr_fd(fin_str, 1);
	return (ft_strlen(fin_str));
}

int		ft_handle_char(char c, t_flags *f)
{
	char	*empty_str;
	int		width;

	if ((width = f->width - 1) > 0)
	{
		if (!(empty_str = malloc(sizeof(char) * width)))
			return (0);
		ft_memset(empty_str, 32, width);
		if (f->left_sort)
		{
			ft_putchar_fd(c, 1);
			ft_putstr_fd(empty_str, 1);
		}
		else
		{
			ft_putstr_fd(empty_str, 1);
			ft_putchar_fd(c, 1);

		}
		width = ft_strlen(empty_str);
		free(empty_str);
		return (width + 1);
	}
	ft_putchar_fd(c, 1);
	return (1);
}

