/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:59:53 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:30:45 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int main (int argc, char **argv) {

	if (argc == 5)
	{
		memset(argv[1],argv[3][0],ft_atoi(argv[4]));
		puts(argv[1]);
		ft_memset(argv[2],argv[3][0],ft_atoi(argv[4]));
		puts(argv[2]);
	}
	
   
   return(0);
}