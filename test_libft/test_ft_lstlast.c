/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:01:36 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/22 21:14:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(void)
{
	t_list	*root = NULL;

	ft_lstadd_front(&root, ft_lstnew((int *)42));
	ft_lstadd_front(&root, ft_lstnew((int *)52));
	ft_lstadd_front(&root, ft_lstnew((int *)62));
	puts("-------- TEST link ----------");
	printf("                  root: %p\n", root);
	printf("            root->next: %p\n", root->next);
	printf("      root->next->next: %p\n", root->next->next);
	printf("root->next->next->next: %p\n", root->next->next->next);
	printf("              last lst: %p\n", ft_lstlast(root));
	puts("-------- TEST NULL ----------");
	printf("             expected : (nil)\n");
	printf("              last lst: %p\n", ft_lstlast((void *)0));
}
