/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:59:16 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/12 13:59:19 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buf;
	unsigned int	buf_size;

	if (s == (void *)0)
		return ((void *)0);
	buf_size = 0;
	while (s[buf_size] != '\0')
		buf_size++;
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	if (buf == (void *)0)
		return ((void *)0);
	buf_size = 0;
	while (s[buf_size] != '\0')
	{
		buf[buf_size] = f(buf_size, s[buf_size]);
		buf_size++;
	}
	buf[buf_size] = '\0';
	return (buf);
}
