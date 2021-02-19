/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:39:26 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/19 14:01:33 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
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
	int	hash;
	int	star;
}				t_flags;


int		ft_format_spec_check(char f);
int		ft_width_set(int i, const char *arg, t_flags *flags);
int		ft_set_precision(int i, const char *arg, t_flags *flags);
int		ft_flag_check(char f);
int		ft_flags(char i, const char *arg, t_flags f, va_list ap);
int		ft_format_spec(char c, va_list ap, int i, t_flags *flags);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_putnbr(int n);
int		ft_print_putnbr(int n, int i);
int		ft_make_format(va_list ap, int i, const char *arg);

void	ft_putbase_upper(unsigned int n);
void	ft_print_base_lower(unsigned int n);
void	ft_putbase_lower(unsigned int n);
void	ft_count_n(int *n, int count);
char	*ft_print_base_upper(unsigned int n, char *stack, int len);

t_flags	ft_flags_set(void);

#endif