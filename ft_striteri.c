
#include <stddef.h>
#define MAX_STR_LENGTH 1024
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
    i = 0;
    if (!s || !f)
        return;
    while (s[i] && i < (MAX_STR_LENGTH - 1))
    {
        f(i, &s[i]);
        i++;
    }
}