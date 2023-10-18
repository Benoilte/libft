/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:01:10 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/18 12:00:12 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("string: %s, start %d, length: %d\n", argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
		printf("substring : %s\n", ft_substr((argv[1]), ft_atoi(argv[2]), ft_atoi(argv[3])));
	}

}
