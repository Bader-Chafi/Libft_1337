#include <stdlib.h> // for malloc and free
#include "libft.h"  // assuming t_list is defined in libft.h

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL; // Pointer to the new list
    t_list *new_node;        // Pointer to the new node

    if (!lst || !f) // Check if the input list or function f is NULL
        return NULL;

    while (lst) // Iterate through the original list
    {
        new_node = ft_lstnew(f(lst->content)); // Apply f to the content and create a new node
        if (!new_node) // Check if malloc failed
        {
            ft_lstclear(&new_list, del); // Clear the new list if allocation fails
            return NULL; // Return NULL on allocation failure
        }
        ft_lstadd_back(&new_list, new_node); // Add the new node to the new list
        lst = lst->next; // Move to the next node in the original list
    }
    return new_list; // Return the newly created list
}