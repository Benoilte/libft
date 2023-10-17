/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:11:27 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 16:28:54 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_needle_occ(const char *s1, const char *needle)
{
	int	i;

	i = 0;
	while (s1[i] && needle[i])
	{
		if (s1[i] != needle[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	if (!needle_len)
		return ((char *)haystack);
	while (*haystack && len && (len >= needle_len))
	{
		if (check_needle_occ(haystack, needle))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
