/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:16:25 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 18:13:34 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char *str1;
    unsigned const char *str2;
    size_t i;
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;
    if (n > 0)
    {
        while (i < n)
        {
            if (str1[i] == str2[i])
                i++;
            else
                return (str1[i] - str2[i]);
        }
    }
    return (0);
}