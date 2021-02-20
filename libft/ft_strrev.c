/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 23:32:23 by hyospark          #+#    #+#             */
/*   Updated: 2021/02/20 00:08:55 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s)
{
	char	*str;
	size_t	slen;
	size_t	j;
	size_t	len;

	len = ft_strlen(s);
	slen = len;
	if (len == 0)
		return ("");
	if (!s || !(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	j = 0;
	len--;
	while (j < slen)
		str[j++] = s[len--];
	str[j] = '\0';
	return (str);
}
