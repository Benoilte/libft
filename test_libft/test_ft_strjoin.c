/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:02:43 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/18 18:06:15 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("         first string: %s\n", argv[1]);
		printf("        second string: %s\n", argv[2]);
		printf("string concatenation : %s\n", ft_strjoin(argv[1], argv[2]));
	}

}
