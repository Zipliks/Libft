/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:54:10 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/16 17:30:18 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*buf;
	size_t			i;

	i = 0;
	buf = (unsigned char *)malloc(count * size);
	if (buf == (void *)0)
		return ((void *)0);
	while (i < count * size)
		buf[i++] = '\0';
	return (buf);
}
