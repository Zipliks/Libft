/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:36:17 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/22 16:48:06 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem_ar1;
	unsigned char	*mem_ar2;

	mem_ar1 = (unsigned char *)s1;
	mem_ar2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n && *mem_ar1 == *mem_ar2)
	{
		mem_ar1++;
		mem_ar2++;
	}
	return ((int)(*mem_ar1 - *mem_ar2));
}
