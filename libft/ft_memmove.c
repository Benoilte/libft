/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:46:19 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:27:28 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char					*str_dst;
	char					*str_src;
	long unsigned int		i;

	str_dst = (char *)dst;
	str_src = (char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			str_dst[len - 1] = str_src[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			str_dst[i] = str_src[i];
			i++;
		}
	}
	return (dst);
}
