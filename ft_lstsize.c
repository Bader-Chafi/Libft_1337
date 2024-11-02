#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int count = 0;

    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return count;
}