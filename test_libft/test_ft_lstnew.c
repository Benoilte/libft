/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:52:06 by bebrandt          #+#    #+#             */
/*   Updated: 2023/11/24 18:16:03 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(void)
{
	int		content;
	t_list	*node;

	content = 42;
	node = ft_lstnew(&content);
	printf("content: %p, next: %p\n", node->content, node->next);
}
