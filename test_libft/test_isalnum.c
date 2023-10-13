/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:43:16 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/13 11:30:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

int main(int argc, char **argv)
{
  char alnum[62] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;

  printf("General Check\n");
  printf("*************\n");
  while (alnum[i])
  {
    printf("Expected result : %d\n", isalnum(alnum[i]));
    printf("ft_isalnum : %d\n", ft_isalnum(alnum[i]));
    i++;
  }


  if (argc == 2)
  {
    printf("User Check\n");
    printf("*************\n");
    printf("Expected result : %d\n", isalnum(argv[1][0]));
    printf("ft_isalnum : %d\n", ft_isalnum(argv[1][0]));
  }
}
