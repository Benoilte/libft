/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:47:49 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/20 13:45:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char			*char_str;
	long unsigned int		i;

	char_str = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		if (char_str[i] == (unsigned char) c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
