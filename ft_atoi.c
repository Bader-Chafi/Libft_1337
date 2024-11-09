/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:11:44 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/08 10:05:15 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_number64(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == ' ' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (number > (LONG_MAX - (str[i] - '0')) / 10)
			return (long_number64(sign));
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
