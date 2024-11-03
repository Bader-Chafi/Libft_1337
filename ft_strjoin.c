/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:35:00 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:37:45 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*con;
	int		i;
	int		j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	con = (char *)malloc(lens1 + lens2 + 1);
	if (!con)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		con[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lens2)
	{
		con[i + j] = s2[j];
		j++;
	}
	con[lens1 + lens2] = '\0';
	return (con);
}
