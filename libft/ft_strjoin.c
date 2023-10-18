/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:18:20 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/18 14:36:59 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1_length;
	size_t	s2_length;
	size_t	total_length;

	s1_length = ft_strlen((s1));
	s2_length = ft_strlen((s1));
	total_length = s1_length + s2_length;
	dest = ft_calloc(total_length + 1, sizeof(char));
	if (!dest)
		return (0);
	ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy((dest + s1_length) + 1, s2, ft_strlen(s2));
	dest[total_length] = '\0';
	return (dest);
}