/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:47:49 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 14:20:14 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char			*char_str;
	long unsigned int	i;

	char_str = (const char *)str;
	i = 0;
    while (n > i)
    {
      if (char_str[i] == c)
        return((void *)(str + i));
      i++;
    }
  return(0);
}