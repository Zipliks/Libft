/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:37:39 by apuchill          #+#    #+#             */
/*   Updated: 2021/11/12 13:56:58 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_map;
	t_list	*tmp;

	lst_map = (void *)0;
	while (lst != (void *)0)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == (void *)0)
		{
			ft_lstclear(&lst_map, del);
			return ((void *)0);
		}
		ft_lstadd_back(&lst_map, tmp);
		lst = lst->next;
	}
	return (lst_map);
}
