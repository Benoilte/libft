/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:08:53 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/17 12:27:57 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, long unsigned int n)
{
	while (*s1 && *s2 && *s1 == *s2 && (n - 1))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
