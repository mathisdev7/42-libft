/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 07:55:23 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/04 19:43:23 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    while (count * size > i)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}