/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:15:00 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/08 16:22:53 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		sh;
	size_t				i;

	str = (unsigned char *)s;
	sh = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == sh)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
