/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:25:01 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/13 13:29:29 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

int main(int argc, char **argv)
{
  char ascii[47] = "öäüéàç0123456789abcdefghijklABCDEFGHIJKL";
  int i;

  i = 0;
  printf("General Check\n");
  printf("*************\n");
  while (ascii[i])
  {
    printf("Expected result : %d\n", isascii(ascii[i]));
    printf("ft_isascii : %d\n", ft_isascii(ascii[i]));
    i++;
  }


  if (argc == 2)
  {
    printf("User Check\n");
    printf("*************\n");
    printf("Expected result : %d\n", isascii(argv[1][0]));
    printf("ft_isascii : %d\n", ft_isascii(argv[1][0]));
  }
}
