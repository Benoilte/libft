/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:28:01 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/20 09:47:35 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putendl_fd(argv[1], 1);
	}
	return (0);
}