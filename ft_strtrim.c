
#include <stdlib.h>
#include "libft.h"
static int if_set_in(const char *set, char s)
{
    int i = 0;
    while (set[i])
    {
        if (set[i] == s)
            return 1;
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i = 0, len = ft_strlen(s1), start = 0, end = len - 1, length;
    char *str;
    while (s1[i])
    {
        while (s1[start] && if_set_in(set, s1[start]))
            start++;
        while (end > start && if_set_in(set, s1[end]))
            end--;
        i++;
    }
    length = (end - start) + 1;
    str = (char *)malloc(length + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (start <= end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    str[length] = '\0';
    return (str);
}