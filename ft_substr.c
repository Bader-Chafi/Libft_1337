
#include <stdlib.h>
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i, size = ft_strlen(s);
    char *sub;
    if (start >= size)
        return (ft_strdup(""));
    if (size - start < len)
        len = size - start;
    sub = (char *)malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (s[start] != '\0' && i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[len] = '\0';
    return (sub);
}
