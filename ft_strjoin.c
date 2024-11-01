/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:18:08 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/01 00:41:53 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int lens1;
    int lens2;
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    int addlens;
    addlens = lens1 + lens2;
    int i, j;
    i = 0;
    j = 0;
    char *con;
    con = (char *)malloc(addlens + 1);
    if (!con)
        return (NULL);
    while (i < lens1)
    {
        con[i] = s1[i];
        i++;
    }
    while (j < lens2)
    {
        con[i + j] = s2[j];
        j++;
    }
    con[addlens] = '\0';
    return (con);
}