/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:45:41 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/16 14:46:18 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("toupper expected : %c\n", toupper(argv[1][0]));
		printf("ft_toupper : %c\n", ft_toupper(argv[1][0]));
	}
	return (0);
}
