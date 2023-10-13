/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:00:26 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/13 13:29:49 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

int main(int argc, char **argv)
{
  char alpha[62] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;

  i = 0;
  printf("General Check\n");
  printf("*************\n");
  while (alpha[i])
  {
    printf("Expected result : %d\n", isalpha(alpha[i]));
    printf("ft_isalpha : %d\n", ft_isalpha(alpha[i]));
    i++;
  }


  if (argc == 2)
  {
    printf("User Check\n");
    printf("*************\n");
    printf("Expected result : %d\n", isalpha(argv[1][0]));
    printf("ft_isalpha : %d\n", ft_isalpha(argv[1][0]));
  }
}
