/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:03:39 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:01:03 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ds;
	char	*sr;
	size_t	i;

	ds = (char *)dst;
	sr = (char *)src;
	i = 0;
	if (!ds && !sr)
		return (dst);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
