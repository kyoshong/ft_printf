/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:39:26 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/16 23:59:10 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h> 
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_flags
{
	int	width;
	int	zero;
	int	left_sort;
	int	dot_n;
	int	plus;
	int	blank;
	int	cross;
	int	star;
}				t_flags;
int		g_return_num;
void	ft_print_base_upper(unsigned int n);
int		ft_format_spec_check(char f);
void	ft_putbase_upper(unsigned int n);
void	ft_print_base_lower(unsigned int n);
void	ft_putbase_lower(unsigned int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_fd(int n);
void	ft_print_putnbr(int n);
void	ft_count_n(int *n, int count);
t_flags	ft_flags_set(void);
int		ft_width_set(int i, char *arg, t_flags *flags);
int		ft_set_precision(int i, char *arg, t_flags *flags);
int		ft_flag_check(char f);
int		ft_flags(char i, char *arg, t_flags f, va_list ap);
#endif