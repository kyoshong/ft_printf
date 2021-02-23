/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 20:46:46 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/24 01:24:51 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, unsigned int s)
{
	while (s > 0)
	{
		*((char *)ptr + s - 1) = val;
		s--;
	}
	return (ptr);
}
