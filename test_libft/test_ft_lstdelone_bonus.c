/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:46:15 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/23 11:46:23 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	del(void *lst);
void	remove_element(t_list **lst, int value);

int	main(int argc, char **argv)
{
	t_list	*root = NULL;

	puts("-------- TEST ROOT ----------");
	printf("              root_ptr: %p\n", root);
	puts("-------- TEST 1 ----------");
	ft_lstadd_back(&root, ft_lstnew((int *)42));
	printf("              root_ptr: %d\n", (int)root->content);
	printf("            root->next: %p\n", root->next);
	puts("-------- TEST 2 ----------");
	ft_lstadd_back(&root, ft_lstnew((int *)52));
	printf("              root_ptr: %d\n", (int)root->content);
	printf("            root->next: %d\n", (int)root->next->content);
	printf("      root->next->next: %p\n", root->next->next);
	puts("-------- TEST 3 ----------");
	ft_lstadd_back(&root, ft_lstnew((int *)62));
	printf("                  root: %d\n", (int)root->content);
	printf("            root->next: %d\n", (int)root->next->content);
	printf("      root->next->next: %d\n", (int)root->next->next->content);
	printf("root->next->next->next: %p\n", root->next->next->next);
	if (argc == 2)
	{
		puts("------- Remove function --------");
		printf("remove linked list with content %d\n", ft_atoi(argv[1]));
		remove_element(&root, ft_atoi(argv[1]));
		puts("------- test after Remove function --------");
		if (ft_lstsize(root) == 3)
		{
			printf("  %d not found\n", ft_atoi(argv[1]));
			printf("                  root: %d\n", (int)root->content);
			printf("            root->next: %d\n", (int)root->next->content);
			printf("      root->next->next: %d\n", (int)root->next->next->content);
			printf("root->next->next->next: %p\n", root->next->next->next);
		}
		else
		{
			printf("  content value %d removed\n", ft_atoi(argv[1]));
			printf("                  root: %d\n", (int)root->content);
			printf("            root->next: %d\n", (int)root->next->content);
			printf("      root->next->next: %p\n", root->next->next);
		}
	}
}

void	remove_element(t_list **lst, int value)
{
	t_list	*to_del;
	t_list	*tmp;
	
	tmp = *lst;
	while (tmp && tmp->next)
	{	
		if ((int)(*lst)->content == value)
		{
			to_del = tmp;
			*lst = tmp->next;
			ft_lstdelone(to_del, &del);
			return ;
		}
		if ((int)tmp->next->content == value)
		{
			to_del = tmp->next;
			tmp->next = tmp->next->next;
			ft_lstdelone(to_del, &del);
		}
		tmp = tmp->next;
	}
}

void	del(void *content)
{
	content = (void *)0;
}