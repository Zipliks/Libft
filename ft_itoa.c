/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:50:03 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/14 22:50:04 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_buf_size(int n)
{
	size_t	buf_size;

	if (n == 0)
		return (1);
	buf_size = 0;
	while (n != 0)
	{
		buf_size++;
		n /= 10;
	}
	return (buf_size);
}

char	*ft_itoa(int n)
{
	char	*buf;
	size_t	buf_size;
	size_t	sign;

	buf_size = ft_get_buf_size(n);
	sign = 0;
	if (n < 0)
		sign = 1;
	buf = (char *)malloc(sizeof(char) * (buf_size + sign + 1));
	if (buf == (void *)0)
		return ((void *)0);
	buf[buf_size + sign] = '\0';
	while (0 < buf_size)
	{
		if (sign)
			buf[--buf_size + sign] = (char)(48 - n % 10);
		else
			buf[--buf_size + sign] = (char)(48 + n % 10);
		n /= 10;
	}
	if (sign)
		buf[0] = '-';
	return (buf);
}
