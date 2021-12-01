/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:12:42 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/12 14:34:40 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	line_size;
	unsigned int	buf_size;
	unsigned int	iterator;
	char			*buf;

	if (s == (void *)0)
		return ((void *)0);
	line_size = 0;
	while (s[line_size] != '\0')
		line_size++;
	if (start + len <= line_size)
		buf_size = len;
	else if (start > line_size)
		buf_size = 0;
	else
		buf_size = line_size - start;
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	if (buf == (void *)0)
		return ((void *)0);
	iterator = -1;
	while (++iterator < buf_size)
		buf[iterator] = s[start + iterator];
	buf[iterator] = '\0';
	return (buf);
}
