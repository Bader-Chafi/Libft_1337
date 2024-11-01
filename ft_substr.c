/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:21:31 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 23:45:11 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i, size = ft_strlen(s);
    char *sub;
    if (start >= size)
        return (ft_strdup(""));
    if (size - start < len)
        len = size - start;
    sub = (char *)malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (s[start] != '\0' && i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[len] = '\0';
    return (sub);
}
