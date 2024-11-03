/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:03:38 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/03 16:51:07 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *occ;

    i = 0;
    occ = NULL;
    if (s == NULL)
        return (NULL);
    while (s[i])
    {
        if (s[i] == (char)c)
            occ = (char *)&s[i];
        i++;
    }
    if (s[i] == (char)c)
        occ = (char *)&s[i];
    return (occ);
}