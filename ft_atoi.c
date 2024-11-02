/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 02:10:01 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/02 02:10:02 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    number = 0;
    sign = 1;
    
    while (str[i] == '\n' || str[i] == '\f' || str[i] == '\t' ||
           str[i] == ' ' || str[i] == '\v' || str[i] == '\r')
    {
        i++;
    }
    
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    
    while (str[i])
    {
        if (str[i] == '+' || str[i] == '-')
        {
            return 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            number = (number * 10) + (str[i] - '0');
            if (str[i + 1] < '0' || str[i + 1] > '9')
            {
                return (number * sign);
            }
        }
        else
        {
            return 0;
        }
        i++;
    }
    
    return (number * sign);
}