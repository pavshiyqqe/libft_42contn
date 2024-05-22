/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:35:47 by yyaniv            #+#    #+#             */
/*   Updated: 2024/05/22 12:35:47 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  len;

    if (!dest || !src)
        return (NULL);
    if (dest < src)
    {
        len = 0;
        while (len < n)
        {
            ((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
            len++;
        }
    }
    else
    {
        len = n;
        while (len > 0)
        {
            len--;
            ((unsigned char *)dest)[len] = ((unsigned char *)src)[len];            
        }
    }
    return (dest);
}