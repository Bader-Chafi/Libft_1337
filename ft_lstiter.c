#include "libft.h" // assuming t_list is defined in libft.h

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f) // Check if lst or f is NULL
        return;

    while (lst) // Iterate through the list
    {
        f(lst->content); // Apply function f on the content of the current node
        lst = lst->next; // Move to the next node
    }
}
