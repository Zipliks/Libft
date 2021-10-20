/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:42:49 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/20 19:53:36 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		*result;
	size_t	i;

	i = 0;
	result = (int *)malloc(sizeof(int));
	while (nptr)
	{
		if (ft_isdigit(nptr[i]))
		{
			*result = *nptr;
			++i;
		}
	}
	return (*result);
}
