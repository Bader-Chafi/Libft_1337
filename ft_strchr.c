/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:17:05 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/08 00:17:07 by bchafi           ###   ########.fr       */
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
