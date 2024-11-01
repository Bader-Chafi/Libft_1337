/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:19:01 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/28 08:46:44 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memchr (const void *s, int c, size_t n)
{
    const unsigned char *str;
    unsigned char       sh;
    size_t              i;

    str = (const unsigned char*) s;
    sh  = (unsigned char) c;
    i   = 0;
    while(i < n)
    {
        if (str[i] == sh)
            return (void *)&str[i];
        i++;    
    }
    return (NULL);
}