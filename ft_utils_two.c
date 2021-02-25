/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 22:22:17 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/25 22:32:48 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

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

int		ft_set_precision(int i, const char *arg, t_flags *flags,  va_list *ap)
{
	char	*tem;
	int		j;
	int		backup;

	backup = i;
	if (arg[i] == 'i' || arg[i] == 'd' || arg[i] == 's')
	{
		flags->dot_n = 0;
		return (i - 1);
	}
	if (arg[i] == '*')
	{
		flags->dot_n = va_arg(*ap, int);
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
	flags->dot_n = ft_atoi(tem);
	free(tem);
	return (i - 1);
}
