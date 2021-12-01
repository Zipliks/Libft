/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:51:19 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/14 22:51:20 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	size_t	str_size;

	if (str == (void *)0)
		return ;
	str_size = 0;
	while (str[str_size] != '\0')
		str_size++;
	write(fd, str, str_size);
	return ;
}
