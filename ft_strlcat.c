/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:31:30 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 11:02:20 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t lendest, lensrc;
    lendest = ft_strlen(dst);
    lensrc = ft_strlen(src);
    i = 0;
    if (dstsize <= lendest)
        return (dstsize + lensrc);
    while (i < lensrc && lendest + i + 1 < dstsize)
    {
        dst[lendest + i] = src[i];
        i++;
    }
    dst[lendest + i] = '\0';
    return (lendest + lensrc);
}
