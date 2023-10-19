/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:39:17 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 14:53:52 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	main()
{
	char	str1[20] = "hello world";
	char	str2[20] = "hello world";

	puts("------ BZERO -----");
	printf("str1 before bzero: %s\n", str1);
	bzero(str1, 12);
	printf("str1 after bzero: %s\n", str1);
	puts("");
	puts("---- FT_BZERO -----");
	printf("str2 before ft_bzero: %s\n", str2);
	ft_bzero(str2, 12);
	printf("str2 after ft_bzero: %s\n", str2);
	return (0);
}
