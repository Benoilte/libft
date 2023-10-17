/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:48:36 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:30:34 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int main (int argc, char **argv) {

	if (argc == 5)
	{
		printf("   string before memcpy : %s\n", argv[1]);
		memcpy(argv[1],argv[3],ft_atoi(argv[4]));
		printf("    string after memcpy : %s\n", argv[1]);
		puts("                                        ");
		printf("string before ft_memcpy : %s\n", argv[2]);
		ft_memcpy(argv[2],argv[3],ft_atoi(argv[4]));
		printf(" string after ft_memcpy : %s\n", argv[2]);
	}
	
   
   return(0);
}