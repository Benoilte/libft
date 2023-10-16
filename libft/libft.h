/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:42:12 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/16 11:26:16 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int	    ft_atoi(char *str);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, long unsigned int n);
char    *ft_strchr(const char *str, int c);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);

#endif
