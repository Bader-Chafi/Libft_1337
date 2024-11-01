/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:13:04 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/30 01:46:40 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t lensrc, i;
    lensrc = ft_strlen(src);
    i = 0;
    if (dstsize == 0)
        return (lensrc);
    while (i < (dstsize - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (lensrc);
}