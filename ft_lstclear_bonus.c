/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:14:08 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/09 22:32:51 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ter;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		ter = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ter;
	}
	free(*lst);
}
