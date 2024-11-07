/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:33:39 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/04 17:01:35 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_find;

	char_find = (char)c;
	while (*s)
	{
		if (*s == char_find)
			return ((char *)s);
		s++;
	}
	if (char_find == '\0')
		return ((char *)s);
	return (NULL);
}
