/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.07@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:41:16 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/12 11:55:32 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("expected result is %d\n", atoi(argv[1]));
		printf("ft_atoi: %d\n", ft_atoi(argv[1]));
	}
}
