/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:36:35 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/16 10:41:04 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("string length: %d \n", ft_strlen(argv[1]));
	}
	return (0);
}
