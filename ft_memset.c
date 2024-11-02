
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    char *str = (char *)b;
    char set = (char) c;
    size_t i = 0;
    while (i < len)
    {
        str[i] = set;
        i++;
    }
    return (b);
}