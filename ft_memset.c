/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:25:26 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 00:26:13 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	char	set;
	size_t	i;

	str = (char *)b;
	set = (char)c;
	i = 0;
	while (i < len)
	{
		str[i] = set;
		i++;
	}
	return (b);
}
