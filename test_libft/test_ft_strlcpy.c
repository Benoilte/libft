/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:03:44 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:31:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

void test(int size)
{
  char  string[] = "Hello there, Venus";
  char  buffer[19];
  // int   r;
  int   len;

  // r = strlcpy(buffer,string,size);
  len = ft_strlcpy(buffer,string,size);

  // printf("Copied '%s' into '%s', length %d\n", string, buffer, r );
  printf("ft_strlcpy: Copied '%s' into '%s', length %d\n", string, buffer, len );
}

int main()
{
  test(19);
  test(10);
  test(1);
  test(0);

  return(0);
}
