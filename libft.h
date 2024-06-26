/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:18:42 by yyaniv            #+#    #+#             */
/*   Updated: 2024/05/20 16:19:59 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);

void    ft_bzero(void *str, size_t n);

char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);

size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlen(const char *str);


#endif
