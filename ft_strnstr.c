/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 07:47:33 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/04 19:43:23 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (little[0] == 0)
    {
        return ((char *)big);
    }
    while (big[i] && len > i)
    {
        while (big[i + j] && big[i + j] == little[j] && len > i + j)
        {
            j++;
            if (little[j] == 0)
                return ((char *)big + i);
        }
        i++;
        j = 0;
    }
    return (0);
}