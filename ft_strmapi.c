
#include "libft.h"
#include <stdlib.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i, len;
    i = 0;
    char *string;

    len = ft_strlen(s);
    if (!s)
        return (0);
    string = (char *)malloc(len + 1);
    if (!string)
        return (NULL);
    while (s[i])
    {
        string[i] = f(i, s[i]);
        i++;
    }
    string[i] = '\0';
    return (string);
}