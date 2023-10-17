/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:41:12 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 16:44:35 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	long unsigned int	src_len;
	long unsigned int	dst_len;
	long unsigned int	total_len;
	long unsigned int	i;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	total_len = src_len + dst_len;
	if (dstsize < (long unsigned int)ft_strlen(dst))
		return (total_len - (dst_len - dstsize));
	i = 0;
	while (dst[i])
		i++;
	while (*src && (dstsize - 1) != i)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (total_len);
}
