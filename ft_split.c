/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:16:58 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/09 10:20:24 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_words(char const *s, char c)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count_words++;
		i++;
	}
	return (count_words);
}

static void	free_str(int len, char **s)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index_word;
	int		len_word;
	char	**he;

	i = 0;
	he = (char **)malloc(((counter_words(s, c)) + 1) * sizeof(char *));
	if (!he)
		return (NULL);
	index_word = 0;
	while (s[i] && index_word < (counter_words(s, c)))
	{
		while (s[i] == c)
			i++;
		len_word = 0;
		while (s[i + len_word] != c && s[i + len_word] != '\0')
			len_word++;
		he[index_word] = ft_substr(s, i, len_word);
		if (!he[index_word])
			return (free_str(index_word, he), NULL);
		(1) && (i += len_word, index_word++);
	}
	he[index_word] = NULL;
	return (he);
}
