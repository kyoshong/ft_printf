/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:19:58 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/26 19:39:29 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	int		i;
	char	*str1;
	char	*str2;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!(n_str = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1)))
		return (NULL);
	i = 0;
	while (*str1 != '\0')
		n_str[i++] = *str1++;
	while (*str2 != '\0')
		n_str[i++] = *str2++;
	n_str[i] = '\0';
	return (n_str);
}
