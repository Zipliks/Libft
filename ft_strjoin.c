/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:58:59 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/12 13:59:00 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	pref_size;
	size_t	suf_size;
	char	*buf;

	if (s1 == (void *)0 || s2 == (void *)0)
		return ((void *)0);
	pref_size = 0;
	while (s1[pref_size] != '\0')
		pref_size++;
	suf_size = 0;
	while (s2[suf_size] != '\0')
		suf_size++;
	buf = (char *)malloc(sizeof(char) * (pref_size + suf_size + 1));
	if (buf == (void *)0)
		return ((void *)0);
	pref_size = -1;
	while (s1[++pref_size] != '\0')
		buf[pref_size] = s1[pref_size];
	suf_size = -1;
	while (s2[++suf_size] != '\0')
		buf[pref_size + suf_size] = s2[suf_size];
	buf[pref_size + suf_size] = '\0';
	return (buf);
}
