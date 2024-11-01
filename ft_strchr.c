/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:20:55 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/01 00:50:16 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char *ft_strchr(const char *s, int c)
{
    char ca;
    ca = (char)c;
    while (*s)
    {
        if (*s == ca)
        {
            return ((char *)s);
        }
        s++;
    }
    if (ca == '\0')
    {
        return ((char *)s);
    }
    return (NULL);
}