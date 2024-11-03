/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:33:39 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:33:40 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_to_find;

	char_to_find = (char)c;
	while (*s)
	{
		if (*s == char_to_find)
		{
			return ((char *)s);
		}
		s++;
	}
	if (char_to_find == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
