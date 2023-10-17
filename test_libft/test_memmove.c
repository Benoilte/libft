/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:35:37 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:19:54 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	char str[100] = "0123456789"; 
	char str2[100] = "0123456789"; 
    char *first, *second; 
    first = str; 
    second = str2; 
	puts("------ MEMMOVE -----");
    printf("Original string :%s\n", str); 
    memmove(first + 2, first, 8); 
    printf("memmove overlap : %s\n", str); 
	puts("");
	puts("------ FT_MEMMOVE -----");
    printf("Original string :%s\n", str2); 
    ft_memmove(second + 2, second, 8); 
    printf("ft_memmove overlap : %s\n", str2); 
	
	if (argc == 5)
	{
		printf("ft_memmove: %s", argv[1]);
	}
	
}