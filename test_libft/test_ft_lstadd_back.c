/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:24:43 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/22 22:05:38 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(void)
{
	t_list	*root = NULL;
	t_list	*tmp;
	int 	i;

	puts("-------- TEST ROOT ----------");
	printf("              root_ptr: %p\n", root);
	puts("-------- TEST 1 ----------");
	ft_lstadd_back(&root, ft_lstnew((int *)42));
	printf("              root_ptr: %p\n", root);
	printf("            root->next: %p\n", root->next);
	puts("-------- TEST 2 ----------");
	ft_lstadd_back(&root, ft_lstnew((int *)52));
	printf("              root_ptr: %p\n", root);
	printf("            root->next: %p\n", root->next);
	printf("      root->next->next: %p\n", root->next->next);
	puts("-------- TEST 3 ----------");
	ft_lstadd_back(&root, ft_lstnew((int *)62));
	printf("                  root: %p\n", root);
	printf("            root->next: %p\n", root->next);
	printf("      root->next->next: %p\n", root->next->next);
	printf("root->next->next->next: %p\n", root->next->next->next);
	i = 1;
	while (root)
	{
		printf("lst %d\n", i++);
		tmp = root->next;
		free(root);
		root = tmp;
	}
	printf("              root_ptr: %p\n", root);
}
