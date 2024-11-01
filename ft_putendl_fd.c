/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:07:43 by bchafi            #+#    #+#             */
/*   Updated: 2024/11/01 11:10:51 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    if (fd == -1)
        return;
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}