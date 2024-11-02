
#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *ds;
    char *sr;
    size_t i;
    ds = (char *)dst;
    sr = (char *)src;
    i = 0;
    if (!ds && !sr)
        return (dst);
    while (i < n)
    {
        ds[i] = sr[i];
        i++;
    }
    return (dst);
}