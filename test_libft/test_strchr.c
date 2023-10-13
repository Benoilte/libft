/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:37:20 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/13 17:08:34 by bebrandt         ###   ########.fr       */
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
    ret = strchr(argv[1], argv[2][0]);
    ft_ret = ft_strchr(argv[1], argv[2][0]);
    printf("String expected after |%c| is - |%s|\n", argv[2][0], ret);
    printf("String with ft_strchr after |%c| is - |%s|\n", argv[2][0], ft_ret);
    printf("adress expected is - |%p|\n", ret);
    printf("adress with ft_strchris - |%p|\n", ft_ret);
  }
  return(0);
}
