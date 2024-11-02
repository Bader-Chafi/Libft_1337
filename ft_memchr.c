
#include <string.h>
void *ft_memchr (const void *s, int c, size_t n)
{
    const unsigned char *str;
    unsigned char       sh;
    size_t              i;

    str = (const unsigned char*) s;
    sh  = (unsigned char) c;
    i   = 0;
    while(i < n)
    {
        if (str[i] == sh)
            return (void *)&str[i];
        i++;    
    }
    return (NULL);
}