/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:39:38 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:40:18 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

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
