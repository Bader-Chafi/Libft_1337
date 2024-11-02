
#include <stdlib.h>
#include "libft.h"
char *ft_strdup(const char *s1)
{
    int lens1 ,i;
    char *dup;
    lens1 = ft_strlen(s1);
    i = 0;
    dup = (char*)malloc(lens1+1);
    while (s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}