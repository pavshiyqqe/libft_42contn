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
int		ft_strlen(char *str);

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strdup(char *s1);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

#endif
