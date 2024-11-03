/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:19:46 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/03 16:49:59 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    unsigned char ch;

    i = 0;
    str = (unsigned char *)s;
    ch = (unsigned char)c;
    while (n > i)
    {
        if (str[i] == ch)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}