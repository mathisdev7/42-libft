/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:55:39 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/03 19:03:49 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int count_words(const char *str, char c)
{
    int i;
    int words;

    i = 0;
    words = 0;
    while (str[i])
    {
        if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
        {
            words++;
        }
        i++;
    }
    return (words);
}

char **ft_split(char const *s, char c)
{
    int words;
    char **str;

    words = count_words(s, c);
    str = malloc(sizeof(char *) * (words + 1));
    if (!str)
        return (NULL);
    return (str);
}

int main()
{
    char const str[] = "yo-les-bluds.";
    int i = 0;
    char **splitted;
    splitted = ft_split(str, '-');
    while (splitted[i])
    {
        printf("%s", splitted[i]);
        i++;
    }
}