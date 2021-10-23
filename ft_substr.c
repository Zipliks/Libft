/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:12:42 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/23 18:19:01 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	index;
	size_t	pos;

	new_str = (char *)malloc(len + 1);
	if (!string || !new_str)
		return (0);
	index = start;
	pos = 0;
	while (index < ft_strlen(string) && pos < len)
		new_str[pos++] = string[index++];
	new_str[pos] = '\0';
	return (new_str);
}
