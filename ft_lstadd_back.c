/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:50:12 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/16 17:20:50 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	if (new == (void *)0)
		return ;
	if (*lst)
	{
		iter = *lst;
		while (iter->next != (void *)0)
			iter = iter->next;
		iter->next = new;
	}
	else
		*lst = new;
	return ;
}
