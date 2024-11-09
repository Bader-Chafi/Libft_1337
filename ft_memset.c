/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:15:41 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/08 17:11:13 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	set;
	size_t			i;

	str = (unsigned char *)b;
	set = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = set;
		i++;
	}
	return (b);
}
