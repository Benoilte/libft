/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:28:54 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 13:34:08 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str_s1;
	char	*str_s2;

	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	while (*str_s1 && *str_s2 && *str_s1 == *str_s2 && (n - 1))
	{
		str_s1++;
		str_s2++;
		n--;
	}
	return (*str_s1 - *str_s2);
}