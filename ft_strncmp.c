/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:03:51 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 19:35:41 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    if (!s1 || !s2 || n == 0)
        return 0;

    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return 0;
}