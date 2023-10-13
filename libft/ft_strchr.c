/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:12:23 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/13 17:12:40 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strchr(const char *str, int c)
{
    while (*str)
    {
      if (*str == c)
        return((char *)str);
      str++;
    }
  if (c)
    return(0);
  return((char *)str);
}
