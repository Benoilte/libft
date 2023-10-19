/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:00:26 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/19 21:53:11 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// second argument is a pointer on a function, it return a 'char' and
// take 2 arguments 'unsigned int' and a 'char'.
// ft_strmapi return a copy of a string 's' with the resulting
// of function 'f' on each 'char'.
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		s_len;
	int		i;
	char	*str;

	s_len = ft_strlen(s);
	str = (char *)ft_calloc((s_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
