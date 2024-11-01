/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:49:25 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/31 09:52:44 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
static int	counter_size(int n)
{
	int	i;

	i = 2;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char *ft_itoa(int n)
{
	long	i;
	int		size;
	char	*str;

	i = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = counter_size(n);
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	if (n < 0)
		n *= -1;
	str[--size] = '\0';
	while ((--size) >= 0)
	{
		str[size] = n % 10 + 48;
		n /= 10;
	}
	if (i < 0)
		*str = '-';
	return (str);
}