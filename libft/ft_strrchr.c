/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:59:45 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/16 14:16:51 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (!c)
  		return((char *)(str + len));
	len--;
    while (len >= 0)
    {
    	if (str[len] == c)
        	return((char *)(str + len));
		len--;
    }
	return(0);
}