/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:48:36 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/20 15:56:12 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = malloc(count * size);
	if (!mem)
		return (0);
	i = 0;
	while (i < count * size)
		mem[i++] = 0;
	return (mem);
}
