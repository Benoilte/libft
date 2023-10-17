/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:17:43 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:31:14 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("string occurence expected: %s \n", strnstr(argv[1], argv[2], ft_atoi(argv[3])));
		printf("string occurence ft_strnstr: %s \n", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	}
	return (0);
}