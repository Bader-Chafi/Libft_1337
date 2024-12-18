/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:15:25 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/09 10:14:20 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		dest[i] = src[i];
	}
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*sourc;

	dest = (char *)dst;
	sourc = (const char *)src;
	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (NULL);
	if (dest > sourc)
		dest = copy(dest, sourc, len);
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = sourc[i];
			i++;
		}
	}
	return (dest);
}
