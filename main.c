#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    char *result = ft_strmapi("hello world", "f");
    if (result) {
        printf("Transformed string: %s\n", result); // Outputs: "HELLO WORLD"
        free(result); // Remember to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}