/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:56:38 by bebrandt          #+#    #+#             */
/*   Updated: 2023/11/24 18:09:45 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	del(void *lst);
// void	remove_element(t_list **lst, int value);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	return (0);
	// t_list	*root = NULL;

	// ft_lstadd_back(&root, ft_lstnew((int *)42));
	// ft_lstadd_back(&root, ft_lstnew((int *)52));
	// ft_lstadd_back(&root, ft_lstnew((int *)62));
	// ft_lstadd_back(&root, ft_lstnew((int *)72));
	// ft_lstadd_back(&root, ft_lstnew((int *)82));
	// printf("                  root: %d\n", (int)root->content);
	// printf("            root->next: %d\n", (int)root->next->content);
	// printf("      root->next->next: %d\n", (int)root->next->next->content);
	// printf("      root->next->next: %d\n", (int)root->next->next->next->content);
	// printf("      root->next->next: %d\n", (int)root->next->next->next->next->content);
	// if (argc == 2)
	// {
	// 	puts("------- Remove function --------");
	// 	printf("  remove linked list from content %d\n", ft_atoi(argv[1]));
	// 	remove_element(&root, ft_atoi(argv[1]));
	// 	puts("------- test after Remove function --------");
	// 	if (!root)
	// 	{
	// 		printf("linked list is empty\n");
	// 		return (1);
	// 	}
	// 	if (ft_lstsize(root) == 5)
	// 	{
	// 		printf("  %d not found\n", ft_atoi(argv[1]));
	// 		printf("                  root: %d\n", (int)root->content);
	// 		printf("            root->next: %d\n", (int)root->next->content);
	// 		printf("      root->next->next: %d\n", (int)root->next->next->content);
	// 		printf("      root->next->next: %d\n", (int)root->next->next->next->content);
	// 		printf("      root->next->next: %d\n", (int)root->next->next->next->next->content);
	// 	}
	// 	else
	// 	{
	// 		printf("  linked list removed from %d\n", ft_atoi(argv[1]));
	// 		if (ft_lstsize(root) >= 1)
	// 			printf("                  root: %d\n", (int)root->content);
	// 		if (ft_lstsize(root) >= 2)
	// 			printf("            root->next: %d\n", (int)root->next->content);
	// 		if (ft_lstsize(root) >= 3)
	// 			printf("      root->next->next: %d\n", (int)root->next->next->content);
	// 		if (ft_lstsize(root) >= 4)
	// 			printf("      root->next->next: %d\n", (int)root->next->next->next->content);
	// 		if (ft_lstsize(root) >= 5)
	// 			printf("      root->next->next: %d\n", (int)root->next->next->next->next->content);
	// 	}
	// }
}

// void	remove_element(t_list **lst, int value)
// {
// 	t_list	*to_del;
// 	t_list	*tmp;

// 	tmp = *lst;
// 	while (tmp && tmp->next)
// 	{
// 		if ((int)(*lst)->content == value)
// 		{
// 			ft_lstclear(&tmp, &del);
// 			*lst = tmp;
// 			return ;
// 		}
// 		if ((int)tmp->next->content == value)
// 		{
// 			to_del = tmp->next;
// 			tmp->next = (void *)0;
// 			ft_lstclear(&to_del, &del);
// 		}
// 		tmp = tmp->next;
// 	}
// }

// void	del(void *content)
// {
// 	content = (void *)0;
// }
