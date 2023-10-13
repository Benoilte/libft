/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:02:02 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/13 14:15:07 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft/libft.h"

int main()
{
  int c;
  for(c = 1; c <= 127; ++c)
  {
    printf("Expected result : %d\n", isprint(c));
    printf("ft_isdigit : %d\n", ft_isprint(c));
    if (isprint(c))
      printf("char : %c \n", c);
  }
  return 0;
}
