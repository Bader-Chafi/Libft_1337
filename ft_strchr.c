
#include <string.h>
char *ft_strchr(const char *s, int c)
{
    char ca;
    ca = (char)c;
    while (*s)
    {
        if (*s == ca)
        {
            return ((char *)s);
        }
        s++;
    }
    if (ca == '\0')
    {
        return ((char *)s);
    }
    return (NULL);
}