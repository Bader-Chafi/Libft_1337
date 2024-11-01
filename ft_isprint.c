/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:16:25 by bchafi            #+#    #+#             */
/*   Updated: 2024/10/25 11:16:26 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
   if (c >= 32 && c < 127)
        return (1);
    return (0);
}