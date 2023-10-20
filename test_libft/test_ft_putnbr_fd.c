/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:27:36 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/20 09:55:41 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr_fd(ft_atoi(argv[1]), 1);
	}
	return (0);
}