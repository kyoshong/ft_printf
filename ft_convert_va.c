/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_va.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:23:28 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/18 21:45:27 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int		ft_convert_str(char *va)
{
	ft_putstr_fd(va, 1);
	return (ft_strlen(va));
}

int		ft_convert_int(int va)
{
	
	return ;
}

int		ft_convert_unsigned_int(unsigned int va)
{
	return ;
}

int		ft_convert_pointer_int(int *va)
{

}
