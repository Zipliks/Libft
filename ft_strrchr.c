/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:06:41 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/13 19:40:25 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	const char	*temp;

	temp = str;
	while (*str)
		str++;
	while (str >= temp)
		if (*str-- == (char)chr)
			return ((char *)str + 1);
	return (NULL);
}
