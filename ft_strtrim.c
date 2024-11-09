/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:46:08 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/09 10:16:46 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenstart(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	return (i);
}

static int	lenend(char const *s, char const *set, int start, int end)
{
	while (end > start && ft_strchr(set, s[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		length;
	char	*str;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	start = lenstart(s1, set);
	end = lenend(s1, set, start, end);
	length = (end - start) + 1;
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[length] = '\0';
	return (str);
}
