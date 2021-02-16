/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 22:22:17 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/17 00:33:48 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_width_set(int i, const char *arg, t_flags *flags)
{
	char	*tem;
	int		j;
	int		len;
	int		backup;

	len = 0;
	backup = i;
	while (!(arg[i] >= 49 && 57 >= arg[i]))
	{
		i++;
		len++;
	}
	if (!(tem = (char *)malloc((sizeof(char) * len) + 1)))
		return (0);
	j = 0;
	while (len > j)
		tem[j++] = arg[backup++];
	tem[j] = '\0';
	flags->width = ft_atoi(tem);
	free(tem);
	return (i);
}

int		ft_set_precision(int i, const char *arg, t_flags *flags)
{
	char	*tem;
	int		j;
	int		len;
	int		backup;

	len = 0;
	backup = i++;
	while (!(arg[i] >= 49 && 57 >= arg[i]))
	{
		i++;
		len++;
	}
	if (!(tem = (char *)malloc((sizeof(char) * len) + 1)))
		return (0);
	j = 0;
	while (len > j)
		tem[j++] = arg[backup++];
	tem[j] = '\0';
	flags->dot_n = ft_atoi(tem);
	free(tem);
	return (i);
}