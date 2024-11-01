
#include "libft.h"
#include <unistd.h>
void ft_putnbr_fd(int n, int fd)
{
    if (fd < 0)
        return;
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n > 9 )
        ft_putnbr_fd(n / 10, fd);
    char s = (n % 10) + '0';
    write(fd, &s, 1);
}