/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:53:57 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 14:05:46 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int main(int argc, char **argv)
{
  char *ret;
  char *ft_ret;

  if (argc == 4)
  {
    ret = memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
    ft_ret = ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
    printf("String expected after |%c| is - |%s|\n", argv[2][0], ret);
    printf("String with ft_memchr after |%c| is - |%s|\n", argv[2][0], ft_ret);
    printf("adress expected is - |%p|\n", ret);
    printf("adress with ft_memchris - |%p|\n", ft_ret);
  }
  return(0);
}