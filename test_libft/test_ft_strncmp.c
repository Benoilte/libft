/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:07:05 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/20 11:22:48 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		puts("-------- USER TEST ----------");
		printf("string comparison expected: %d \n", strncmp(argv[1], argv[2], ft_atoi(argv[3])));
		printf("string comparison ft_strncmp: %d \n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	}
	return (0);
}