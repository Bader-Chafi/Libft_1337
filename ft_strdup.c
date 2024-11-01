/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:19:28 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 12:54:30 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
char *ft_strdup(const char *s1)
{
    int lens1 ,i;
    char *dup;
    lens1 = ft_strlen(s1);
    i = 0;
    dup = (char*)malloc(lens1+1);
    while (s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}