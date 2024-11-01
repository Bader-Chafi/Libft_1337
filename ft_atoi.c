/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:55:30 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 22:18:29 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int number;

    number  = 0;
    sign    = 1;
    i = 0;
    while (str[i] == '\n' || str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || str[i] == '\v' || str[i] == '\r')
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        sign = 1;
        i++;
    }
    while (str[i])
    {
        if (str[i] == '+' || str[i] == '-')
            return (0);
        else if (str[i] >= '0' && str[i] <= '9')
        {
            number = (number * 10) + (str[i] - 48);
            if (str[i+1] > '9' || str[i+1] < '0') 
                return (number * sign);
        }
        else
            return (0);
        i++;
    }
    return (number * sign);
}