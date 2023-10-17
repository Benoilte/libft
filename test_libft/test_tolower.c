/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:32:30 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:31:22 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("tolower expected : %c\n", tolower(argv[1][0]));
		printf("ft_tolower : %c\n", ft_tolower(argv[1][0]));
	}
	return (0);
}
