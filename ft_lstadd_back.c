/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:57:53 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/03 02:55:21 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastlst;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		lastlst = ft_lstlast(*lst);
		lastlst->next = new;
	}
}
