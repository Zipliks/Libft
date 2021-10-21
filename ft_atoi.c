/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:42:49 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/21 17:31:22 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	minus;
	int	i;

	result = 0;
	minus = 0;
	i = 0;
	while ((nptr[i] == '\t') || (nptr[i] == '\n') || (nptr[i] == '\v') \
			|| (nptr[i] == '\f') || (nptr[i] == '\r') || (nptr[i] == ' '))
		++i;
	if (nptr[i] == '-')
		minus = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
		++i;
	while (nptr[i] && (nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		result *= 10;
		result += nptr[i] - '0';
		++i;
	}
	if (minus)
		return (-result);
	else
		return (result);
}
