/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:28:28 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/22 11:34:39 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(void)
{
	t_list	*root = NULL;

	puts("-------- TEST 0 ----------");
	printf(" Expected : 0\n");
	printf("ft_lstsize: %d\n", ft_lstsize(root));
	puts("-------- TEST 1 ----------");
	ft_lstadd_front(&root, ft_lstnew((int *)42));
	printf(" Expected : 1\n");
	printf("ft_lstsize: %d\n", ft_lstsize(root));
	puts("-------- TEST 2 ----------");
	ft_lstadd_front(&root, ft_lstnew((int *)52));
	printf(" Expected : 2\n");
	printf("ft_lstsize: %d\n", ft_lstsize(root));
	puts("-------- TEST 3 ----------");
	ft_lstadd_front(&root, ft_lstnew((int *)62));
	printf(" Expected : 3\n");
	printf("ft_lstsize: %d\n", ft_lstsize(root));
}
