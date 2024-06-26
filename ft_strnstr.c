/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:25:48 by yyaniv            #+#    #+#             */
/*   Updated: 2024/05/22 19:25:48 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;

	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	if (n_len > len)
		return (NULL);
	i = 0;
	while (i <= len - n_len)
	{
		if (ft_strncmp(&haystack[i], needle, n_len) == 0)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}