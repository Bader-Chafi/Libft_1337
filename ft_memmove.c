
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dest;
    const char *sourc;
    size_t i;
    dest = (char *)dst;
    sourc = (const char *)src;
    if (!dest && !sourc)
        return (NULL);
    if (dest > sourc && dest < sourc + len)
    {
        i = len;
        while (i > 0)
        {
            i--;
            dest[i] = sourc[i];
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            dest[i] = sourc[i];
            i++;
        }
    }
    return (dest);
}