/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 06:59:28 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/19 21:48:28 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char	ft_test(unsigned int i, char c);

int	main(int argc, char **argv)
{
	char (*f)(unsigned int, char);

	f = &ft_test;
	puts("-------- EDGE CASE ----------");
	printf("   Expected : AeAlA AoAlA\n");
	printf("  ft_strmapi: %s\n", ft_strmapi("Hello World", f));

	if (argc == 2)
	{
		puts("-------- USER TEST ----------");
		printf("  ft_strmapi: %s\n", ft_strmapi(argv[1], &ft_test));
	}
}

// if int 'i' is pair c is replace by 'A'
char	ft_test(unsigned int i, char c)
{
	if ((i % 2) == 0)
		c = 'A';
	return (c);
}
