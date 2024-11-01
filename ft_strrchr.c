/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:26:13 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 11:52:03 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char *ft_strrchr(const char *s, int c)
{
    char caracter;
    int lchar;
    int i;
    caracter = (char)c;
    lchar = -1;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == caracter)
            lchar = i;
        i++;
    }
    if (lchar != -1)
        return (char *)&s[lchar];
    if (caracter == '\0')
        return (char *)&s[i];
    return (NULL);
}