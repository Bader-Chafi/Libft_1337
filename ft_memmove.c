/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:04:04 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:01:16 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy(char *dest, const char *src, size_t len)
{
	while (len > 0)
	{
		len--;
		dest[len] = src[len];
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
	if (!dest || !sourc)
		return (NULL);
	if (dest > sourc && dest < sourc + len)
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
