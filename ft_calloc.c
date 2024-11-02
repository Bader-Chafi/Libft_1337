
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i, total_alocate;
    i = 0;
    if (count == 0 || size == 0)
        return (malloc(0));
    total_alocate = count * size;  //total number of bytes we want to allocate.
    if (count != 0 && (total_alocate / count) != size) // count * size تجاوزت الحد المسموح به وأدت إلى "تجاوز سعة" أو overflow في المتغير total_alocate
        return (NULL);
    tmp = malloc(total_alocate);
    if (!tmp)
        return (NULL);
    ft_memset(tmp, 0, total_alocate);
    return ((void*)tmp);
}

// count: The number of elements to allocate.
// size: The size in bytes of each element.