/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:39:26 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/24 01:24:24 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h> 
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

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

int		ft_printf(const char *arg, ...);
int		ft_make_format(va_list *ap, int i, char *arg);

t_flags	ft_set_flags(void);
int		ft_format_spec_check(char f);
int		ft_flag_check(char f);
int		ft_format_spec(char c, va_list *ap, int i, t_flags *flags);
int		ft_flags(int i, const char *arg, t_flags *f, va_list *ap);

int		ft_width_set(int i, const char *arg, t_flags *flags);
int		ft_set_precision(int i, const char *arg, t_flags *flags);

char	*ft_get_upper_str(unsigned int n);
char	*ft_get_lower_str(unsigned int n);
int		ft_count_base(unsigned int n, int i);
int		ft_get_base_count(unsigned int n);

int		ft_print_putnbr(int n , int i);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);

int		ft_handle_str(char *str, t_flags f);
int		ft_handle_char(char c, t_flags f);
int		ft_handle_percent(t_flags f);

int		ft_handle_bigx(unsigned int bigx, t_flags f);
int		ft_handle_smallx(unsigned int smallx, t_flags f);
int		ft_handle_u(unsigned int u, t_flags f);
char	*ft_set_unsigned_int_zero(char *str, int width);
char	*ft_set_unsigned_int_dot_n(char *tem_str, t_flags *f);

int		ft_handle_int(int d, t_flags f);
char	*ft_int_dot_n_set(char *tem_str, t_flags *f, int i);
char	*ft_int_zero_set(char *str, int width);
char	*ft_int_width_set(char *str, t_flags *f, int width, int set);
char	*ft_join_signed(char *str, char *zero, int	size);
char	*ft_strdup_signed(char *s, int size);
char	*ft_uitoa(unsigned int n);
int		ft_handle_p(unsigned long ptr, t_flags f);
void	ft_handle_ptr_int(int *ptr, int count);


#endif