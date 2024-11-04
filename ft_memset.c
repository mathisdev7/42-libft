/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:32:46 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/04 19:43:23 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;

    ptr = (unsigned char *)b;
    while (len > 0)
    {
        *(ptr++) = (unsigned char)c;
        len--;
    }
    return (b);
}