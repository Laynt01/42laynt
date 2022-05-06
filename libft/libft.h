/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:54:01 by alvtorre          #+#    #+#             */
/*   Updated: 2022/04/28 20:52:03 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);

int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	    ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int     *ft_memcmp(const void *s1, const void *s2, size_t n);
char    *strnstr(const char *haystack, const char *needle, size_t len);
#endif