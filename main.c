/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:35:26 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/20 03:18:12 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

#define UNUSED(x) (void)(x)

int	main(void)
{
	char	str[50];

	ft_strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 7);
	puts(str);
	return (0);
}
