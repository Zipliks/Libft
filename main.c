/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:35:26 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/21 20:37:20 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

#define UNUSED(x) (void)(x)

int	main(void)
{
	unsigned char	*str;
	const char		str1[] = "new.string";
	const char		ch     = '.';
	// int				i;
	int				n;

	n = 5;
	str = (unsigned char *)str1;
	while (n--)
		if (*str++ == ch)
			printf("%s", str + 1);
	return (0);
}
