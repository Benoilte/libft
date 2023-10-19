/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:46:02 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:30:20 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft/libft.h"

int main(int argc, char **argv)
{
  char digit[62] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;

  i = 0;
  printf("General Check\n");
  printf("*************\n");
  while (digit[i])
  {
    printf("Expected result : %d\n", isdigit(digit[i]));
    printf("ft_isdigit : %d\n", ft_isdigit(digit[i]));
    i++;
  }


  if (argc == 2)
  {
    printf("User Check\n");
    printf("*************\n");
    printf("Expected result : %d\n", isdigit(argv[1][0]));
    printf("ft_isdigit : %d\n", ft_isdigit(argv[1][0]));
  }
}
