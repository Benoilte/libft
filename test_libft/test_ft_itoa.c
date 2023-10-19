/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 04:49:37 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/19 05:06:56 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	puts("-------- EDGE CASE ----------");
	puts("-------- MIN INT ----------");
	printf("Expected : -2147483648\n");
	printf("  ft_itoa: %s\n", ft_itoa(-2147483648));
	puts("-------- MAX INT ----------");
	printf("Expected : 2147483647\n");
	printf("  ft_itoa: %s\n", ft_itoa(2147483647));
	puts("-------- TEST 0 ----------");
	printf("Expected : 0\n");
	printf("  ft_itoa: %s\n", ft_itoa(0));
	puts("-------- TEST 42 ----------");
	printf("Expected : 42\n");
	printf("  ft_itoa: %s\n", ft_itoa(42));
	puts("-------- TEST -42 ----------");
	printf("Expected : -42\n");
	printf("  ft_itoa: %s\n", ft_itoa(-42));

	if (argc == 2)
	{
		puts("-------- USER TEST ----------")
		printf("Expected : %d\n", ft_atoi(argv[1]));
		printf("  ft_itoa: %s\n", ft_itoa(argv[1]));
	}

}
