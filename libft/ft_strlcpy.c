/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:29:59 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:27:48 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
  /*
    return the length of src
    copy only the size -1 of chars
    add null char at the end
  */
  long unsigned int i;
  long unsigned int len;

  i = 0;
  if (size)
  {
    while (src[i] && (size - 1) != i)
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
  }
  len = 0;
  while (src[len])
    len++;
  return (len);
}
