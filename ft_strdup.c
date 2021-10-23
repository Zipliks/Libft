/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:56:18 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/23 18:02:39 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*copy;
	size_t	pos;

	copy = malloc(sizeof(char) * ft_strlen(string) + 1);
	if (!copy)
		return (NULL);
	pos = 0;
	while (string[pos] != '\0')
	{
		copy[pos] = string[pos];
		pos++;
	}
	copy[pos] = '\0';
	return (copy);
}
