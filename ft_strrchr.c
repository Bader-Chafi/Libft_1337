
#include <string.h>
char *ft_strrchr(const char *s, int c)
{
    char caracter;
    int lchar;
    int i;
    caracter = (char)c;
    lchar = -1;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == caracter)
            lchar = i;
        i++;
    }
    if (lchar != -1)
        return (char *)&s[lchar];
    if (caracter == '\0')
        return (char *)&s[i];
    return (NULL);
}