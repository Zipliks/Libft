/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:35:26 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/20 19:51:13 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

#define UNUSED(x) (void)(x)

int	main(void)
{
	int		val;
	char	str[20];

	strcpy(str, "98993489");
	val = ft_atoi(str);
	printf("String value = %s\n Int value = %d\n", str, val);
	strcpy(str, "tutorialspoint.com");
	val = ft_atoi(str);
	printf("String value = %s\n Int value = %d\n", str, val);
	return (0);
}
