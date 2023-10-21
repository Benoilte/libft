/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:04:43 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/21 13:39:22 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int main(int argc, char **argv)
{
    // int		r1;
    int		r2;
    // char	buffer1[ft_atoi(argv[3])];
    char	buffer2[ft_atoi(argv[3])];
	// char	dest1[10] = "a";
	char	dest2[10] = "a";

	// puts("------ STRLCAT -------");
    // printf("   STRLCAT: %lu\n", strlcat(dest1, "lorem ipsum dolor sit amet", 6));
    // write(1, "\n", 1);
    // write(1, dest1, 15);
	// write(1, "\n", 1);
	puts("----- FT_STRLCAT -----");
    printf("FT_STRLCAT: %zu\n", ft_strlcat(dest2, "lorem ipsum dolor sit amet", 6));
    write(1, "\n", 1);
    write(1, dest2, 15);
	write(1, "\n", 1);
	if (argc == 4)
	{
		// strcpy(buffer1, argv[1]);
		// r1 = strlcat(buffer1, argv[2], ft_atoi(argv[3]));
		strcpy(buffer2, argv[1]);
		r2 = ft_strlcat(buffer2, argv[2], ft_atoi(argv[3]));
		// puts("------ STRLCAT -------");
		// printf(" first str: '%s' \n append second str: '%s' \n result : '%s' \n length %d\n", argv[1], argv[2], buffer1, r1 );
		puts("");
		puts("");
		puts("----- FT_STRLCAT -----");
		printf(" first str: '%s' \n append second str: '%s' \n result : '%s' \n length %d\n", argv[1], argv[2], buffer2, r2 );
	}


    return(0);
}

//If you don't give a dstsize long enough, it will concatenate dstsize - strlen(dst) - 1 characters, adding the NUL-terminating character after that.
