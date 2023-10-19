/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:16:49 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/19 23:11:41 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_test(unsigned int i, char *s);

int	main(int argc, char **argv)
{
	char	str1[] = "Hello World";
	char	*str2;
	void 	(*f)(unsigned int, char*);

	f = &ft_test;
	puts("-------- EDGE CASE ----------");
	ft_striteri(str1, f);
	printf("   Expected : AeAlA AoAlA\n");
	printf(" ft_striteri: %s\n", str1);

	if (argc == 2)
	{
		str2 = argv[1];
		puts("-------- USER TEST ----------");
		ft_striteri(str2, &ft_test);
		printf("  ft_striteri: %s\n", str2);
	}
	return (0);
}

// if int 'i' is pair => replace by 'A' the 'char' 'c'
void	ft_test(unsigned int i, char *c)
{
	if ((i % 2) == 0)
		*c = 'A';
}
