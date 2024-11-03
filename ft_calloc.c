/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:51:50 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:53:21 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			total_allocate;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	total_allocate = count * size;
	if (count != 0 && (total_allocate / count) != size)
		return (NULL);
	tmp = malloc(total_allocate);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, total_allocate);
	return ((void *)tmp);
}
