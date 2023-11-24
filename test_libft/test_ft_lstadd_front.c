/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:38:23 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/22 11:24:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(void)
{
	t_list	*root = NULL;

	puts("-------- TEST 1 ----------");
	ft_lstadd_front(&root, ft_lstnew((int *)42));
	printf("              root_ptr: %p\n", root);
	puts("-------- TEST 2 ----------");
	ft_lstadd_front(&root, ft_lstnew((int *)52));
	printf("              root_ptr: %p\n", root);
	puts("-------- TEST 3 ----------");
	ft_lstadd_front(&root, ft_lstnew((int *)62));
	printf("              root_ptr: %p\n", root);
	puts("-------- TEST link ----------");
	printf("                  root: %p\n", root);
	printf("            root->next: %p\n", root->next);
	printf("      root->next->next: %p\n", root->next->next);
	printf("root->next->next->next: %p\n", root->next->next->next);
}
