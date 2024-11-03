/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:46:08 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 09:52:48 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	if_set_in(const char *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

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
		while (s1[start] && if_set_in(set, s1[start]))
			start++;
		while (end > start && if_set_in(set, s1[end]))
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
