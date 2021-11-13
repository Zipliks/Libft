/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:42:49 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/13 17:52:08 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long	result;
	int					minus;

	result = 0;
	minus = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			minus *= -1;
		nptr++;
	}
	while (*nptr && (*nptr >= '0') && (*nptr <= '9'))
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	if (result > __LONG_LONG_MAX__)
	{
		if (minus == 1)
			return (-1);
		return (0);
	}
	return (result * minus);
}
