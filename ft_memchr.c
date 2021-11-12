/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:25:53 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/12 14:34:05 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_ch;
	unsigned char	*tmp;

	c_ch = c;
	tmp = (unsigned char *)s;
	while (n-- != 0)
	{
		if (*tmp == c_ch)
			return (tmp);
		tmp++;
	}
	return ((void *)0);
}
