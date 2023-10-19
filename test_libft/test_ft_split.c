/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 00:16:37 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/19 03:23:32 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	ft_free_strs(char **strs);

int	main(int argc, char **argv)
{
	char	**strs;
	int		i;

	i = 0;
	if (argc == 3)
	{
		puts("-------- USER TEST ----------");
		printf(" string : %s, c : %c\n", argv[1], argv[2][0]);
		strs = ft_split(argv[1], argv[2][0]);
		while (strs[i])
		{
			printf("word [%d]: [%s]\n", i, strs[i]);
			i++;
		}
		ft_free_strs(strs);
	}
	return (0);
}

// ft_free_strs free all position allocated in tab + free the tab at the end.
static void	ft_free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}
