/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:47 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/13 19:42:37 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	jdx;

	idx = 0;
	jdx = 0;
	if (!*little)
		return ((char *)big);
	while (big[idx] != '\0' && idx < len)
	{
		if (little[0] == big[idx])
		{
			while (little[jdx] != '\0' && big[idx + jdx] \
				== little[jdx] && idx + jdx < len)
			{
				if (little[jdx + 1] == '\0')
					return ((char *)&big[idx]);
				jdx++;
			}
		}
		idx++;
	}
	return (NULL);
}
