/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:09:50 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/20 17:43:04 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_in;
	unsigned char	*dst_out;

	src_in = (unsigned char *)src;
	dst_out = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*dst_out++ = *src_in++;
	return (dest);
}
