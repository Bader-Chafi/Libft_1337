/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:12:25 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/01 03:17:54 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#define MAX_STR_LENGTH 1024
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
    i = 0;
    if (!s || !f)
        return;
    while (s[i] && i < (MAX_STR_LENGTH - 1))
    {
        f(i, &s[i]);
        i++;
    }
}