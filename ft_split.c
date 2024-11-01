/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:01:26 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/01 01:16:16 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
static int counter_words(char const *s, char c)
{
    int i = 0, count_words = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count_words++;
        i++;
    }
    return (count_words);
}

char **ft_split(char const *s, char c)
{
    int i = 0, d = 0, count_words = counter_words(s, c), j = 0;
    char **he = (char **)malloc((count_words + 1) * sizeof(char *));
    if (!he)
        return (NULL);
    int index_word = 0;
    while (s[i] && index_word < count_words)
    {
        while (s[i] == c) i++;
        int len_word = 0;
        while (s[i + len_word] != c && s[i + len_word] != '\0')
            len_word++;
        he[index_word] = (char *)malloc((len_word + 1));
        if (!he[index_word])
        {
            while (j < index_word)
            {
                free(he[j]);
                j++;
            }
            free(he);
            return (NULL);
        }
        d = 0;
        while (d < len_word)
        {
            he[index_word][d] = s[i + d];
            d++;
        }
        he[index_word][d] = '\0';
        index_word++;
        i += len_word;
    }
    he[index_word] = NULL;
    return (he);
}