/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:16:13 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 15:34:10 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	if (argc == 2)
	{
		puts("------ STRDUP -----");
		str1 = strdup(argv[1]);
		printf(" str1 expected: %s\n", str1);
		puts("");
		puts("---- FT_STRDUP -----");
		str2 = ft_strdup(argv[1]);
		printf("str2 ft_strdup: %s\n", str2);
	}
	
	return (0);
}