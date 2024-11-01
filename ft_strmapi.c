/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:00:47 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/01 03:00:48 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i, len;
    i = 0;
    char *string;

    len = ft_strlen(s);
    if (!s)
        return (0);
    string = (char *)malloc(len + 1);
    if (!string)
        return (NULL);
    while (s[i])
    {
        string[i] = f(i, s[i]);
        i++;
    }
    string[i] = '\0';
    return (string);
}