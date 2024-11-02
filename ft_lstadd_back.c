#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst)
        return;
    if (!*lst)
        *lst = new;
    else
    {
        t_list *lastlst = ft_lstlast(*lst);
        lastlst->next = new;
    }
}