/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:51:11 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/14 22:51:12 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	size_t	str_size;

	if (str == (void *)0)
		return ;
	str_size = 0;
	while (str[str_size] != '\0')
		str_size++;
	write(fd, str, str_size);
	write(fd, "\n", 1);
	return ;
}
