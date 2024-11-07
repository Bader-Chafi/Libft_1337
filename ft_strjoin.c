/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:35:00 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/06 16:30:04 by bchafi           ###   ########.fr       */
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
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	con = (char *)malloc(lens1 + lens2 + 1);
	if (!con)
		return (NULL);
	i = -1;
	while (++i < lens1)
		con[i] = s1[i];
	j = -1;
	while (++j < lens2)
		con[i + j] = s2[j];
	con[lens1 + lens2] = '\0';
	return (con);
}
