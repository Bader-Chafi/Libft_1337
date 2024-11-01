/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:16:59 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/30 00:50:36 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *ds;
    char *sr;
    size_t i;
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