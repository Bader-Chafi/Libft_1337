/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:17:49 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/09 10:31:58 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (lensrc);
	lendest = ft_strlen(dst);
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
