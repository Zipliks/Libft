/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:22:50 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/21 15:47:26 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t length)
{
	unsigned char	*source_in;
	unsigned char	*dest_out;

	source_in = (unsigned char *)source;
	dest_out = (unsigned char *)dest;
	if (!dest && !source)
		return (NULL);
	if (source < dest)
		while (length--)
			dest_out[length] = source_in[length];
	else
		while (length--)
			*dest_out++ = *source_in++;
	if (source_in == dest_out)
		return (dest_out);
	else
		return (dest);
}
