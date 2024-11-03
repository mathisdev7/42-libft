/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:19:46 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/03 16:50:02 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str;
    unsigned char *str2;

    i = 0;
    str = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (n > i)
    {
        if ((unsigned char)str[i] != (unsigned char)str2[i])
            return ((unsigned char)str[i] - (unsigned char)str2[i]);
        i++;
    }
    return (NULL);
}