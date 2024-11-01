/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:17:44 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/25 11:17:45 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    char *str = (char *)b;
    char set = (char) c;
    size_t i = 0;
    while (i < len)
    {
        str[i] = set;
        i++;
    }
    return (b);
}