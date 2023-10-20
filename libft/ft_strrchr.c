/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:59:45 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/20 14:04:07 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*occ;

	i = 0;
	occ = (void *)0;
	while (str[i])
	{
		if ((unsigned char) str[i] == (unsigned char) c)
			occ = ((char *)(str + i));
		i++;
	}
	if ((unsigned char) str[i] == (unsigned char) c)
		occ = ((char *)(str + i));
	return (occ);
}
