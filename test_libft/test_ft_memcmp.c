/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:29:18 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 13:31:10 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("block comparison expected: %d \n", memcmp(argv[1], argv[2], ft_atoi(argv[3])));
		printf("block comparison ft_memcmp: %d \n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	}
	return (0);
}