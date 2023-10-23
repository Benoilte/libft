/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:47:18 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/23 16:46:24 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_el;
	t_list	*cp_lst;

	if (!lst || !f || !del)
		return ((void *)0);
	cp_lst = (void *)0;
	while (lst)
	{
		new_el = ft_lstnew(f(lst->content));
		if (!new_el)
		{
			ft_lstclear(&cp_lst, del);
			return ((void *)0);
		}
		ft_lstadd_back(&cp_lst, new_el);
		lst = lst->next;
	}
	return (cp_lst);
}
