/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:46:08 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/04 16:55:46 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		length;
	char	*str;

	i = -1;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[++i])
	{
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (end > start && ft_strchr(set, s1[end]))
			end--;
	}
	length = (end - start) + 1;
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[length] = '\0';
	return (str);
}
