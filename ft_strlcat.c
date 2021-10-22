/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:27:12 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/22 18:57:51 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size)
{
	size_t	pos;
	size_t	j;

	pos = 0;
	while (dest[pos] && pos < size)
		pos++;
	j = pos;
	while (source[pos - j] && (pos + 1 < size))
	{
		dest[pos] = source[pos - j];
		pos++;
	}
	if (pos < size)
		dest[pos] = '\0';
	return (pos + ft_strlen(source));
}
