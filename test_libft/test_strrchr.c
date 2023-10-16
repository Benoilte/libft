/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:05:36 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/16 14:09:54 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

int main (int argc, char **argv)
{
  char *ret;
  char *ft_ret;

  if (argc == 3)
  {
    ret = strrchr(argv[1], argv[2][0]);
    ft_ret = ft_strrchr(argv[1], argv[2][0]);
    printf("String expected after |%c| is - |%s|\n", argv[2][0], ret);
    printf("String with ft_strrchr after |%c| is - |%s|\n", argv[2][0], ft_ret);
    printf("adress expected is - |%p|\n", ret);
    printf("adress with ft_strrchr is - |%p|\n", ft_ret);
  }
  return(0);
}