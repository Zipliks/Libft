/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:27:12 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/23 18:13:34 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t dsize)
{
	size_t	len;
	size_t	pos;

	if (dsize <= ft_strlen(dest))
		return (dsize + ft_strlen(source));
	len = ft_strlen(dest);
	pos = 0;
	while (source[pos] != '\0' && len + 1 < dsize)
	{
		dest[len] = source[pos];
		len++;
		pos++;
	}
	dest[len] = '\0';
	return (ft_strlen(dest) + ft_strlen(&source[pos]));
}
