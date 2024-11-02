
#include <string.h>
void ft_bzero(void *s, size_t n)
{
    char *str;
    str = (char *) s;
    size_t i;
    i = 0;
    while (n > 0)
    {
        str[i++] = 0;
        n--;
    }
}