/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:55:49 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/12 13:55:54 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	buf_size;

	if (s == (void *)0)
		return ;
	buf_size = 0;
	while (s[buf_size] != '\0')
	{
		f(buf_size, &s[buf_size]);
		buf_size++;
	}
	return ;
}
