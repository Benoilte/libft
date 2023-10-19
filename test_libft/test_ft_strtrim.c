/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:39:33 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/18 21:33:14 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	puts("-------- EDGE CASE ----------");
	printf("Expected : My name is Simon\n");
	printf("  strtrim: %s\n", ft_strtrim("ababaaaMy name is Simonbbaaabba", "ab"));
	puts("-------- TEST 1 ----------");
	printf("Expected : \n");
	printf("  strtrim: %s\n", ft_strtrim("ababaaa", "ab"));
	puts("-------- TEST 2 ----------");
	printf("Expected : d\n");
	printf("  strtrim: %s\n", ft_strtrim("ababaaad", "ab"));
	puts("-------- TEST 3 ----------");
	printf("Expected : n\n");
	printf("  strtrim: %s\n", ft_strtrim("nababaaa", "ab"));
	puts("-------- TEST 4 ----------");
	printf("Expected : \n");
	printf("  strtrim: %s\n", ft_strtrim("", "ab"));
	puts("-------- TEST 5 ----------");
	printf("Expected : Hello world\n");
	printf("  strtrim: %s\n", ft_strtrim("Hello world", ""));
	puts("-------- TEST 6 ----------");
	printf("Expected : \n");
	printf("  strtrim: %s\n", ft_strtrim("", ""));
	if (argc == 3)
	{
		puts("-------- USER TEST ----------");
		printf(" string : %s, set : %s\n", argv[1], argv[2]);
		printf("strtrim : %s\n", ft_strtrim(argv[1], argv[2]));
	}



}
