/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:10:10 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/23 15:39:37 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_print_content(void *n);

int	main(void)
{
	t_list	*root = NULL;
	t_list	*tmp;
	
	ft_lstadd_back(&root, ft_lstnew((int *)42));
	ft_lstadd_back(&root, ft_lstnew((int *)52));
	ft_lstadd_back(&root, ft_lstnew((int *)62));
	ft_lstadd_back(&root, ft_lstnew((int *)72));
	ft_lstadd_back(&root, ft_lstnew((int *)82));
	puts("------- VALUE BEFORE LSTITER --------");
	tmp = root;
	while (tmp)
	{
		printf("content value: %d\n", (int)tmp->content);
		tmp = tmp->next;
	}
	ft_lstiter(root, &ft_print_content);
}

void	ft_print_content(void *n)
{
	printf("content : %d\n", (int)n);
}