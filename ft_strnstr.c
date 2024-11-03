/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:42:11 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:53:08 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j]
			&& (haystack[i + j] && (i + j) < len))
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
