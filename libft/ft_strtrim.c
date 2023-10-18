/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:01:30 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/18 19:55:58 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// check if c is in set. if yes return 1 - in no return 0
// check_set('a', "dsa") ==> 1
// check_set('h', "dsa") ==> 0
static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (check_set(s1[start], set))
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (check_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start) + 1));
}
