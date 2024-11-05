/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:55:39 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 01:07:10 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (words);
}

int	s_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	**ft_copy(const char *str, char c, char **result)
{
	int	i;
	int	current_pos;
	int	j;

	i = 0;
	current_pos = 0;
	j = 0;
	result[current_pos] = malloc(sizeof(char *) * s_len(str));
	while (str[i])
	{
		if (str[i] != c)
		{
			result[current_pos][j] = str[i];
			j++;
		}
		else
		{
			result[current_pos][j] = '\0';
			current_pos++;
			result[current_pos] = malloc(sizeof(char *) * s_len(str));
			j = 0;
		}
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**str;
	int		i;

	words = count_words(s, c);
	i = 0;
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
	{
		return (NULL);
	}
	while (s[i] == c)
		i++;
	str = ft_copy(s, c, str);
	return (str);
}

int	main(void)
{
	char const	str[] = "      split       this for   me  !       ";
	int			i;
	char		**splitted;

	i = 0;
	splitted = ft_split(str, '-');
	while (splitted[i])
	{
		printf("%d -> %s, ", i, splitted[i]);
		i++;
	}
}
