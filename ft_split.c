/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:55:39 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 00:17:32 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (str[i] == c)
	{
		words++;
		i++;
	}
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

	words = count_words(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
	{
		return (NULL);
	}
	str = ft_copy(s, c, str);
	return (str);
}

/*
int	main(void)
{
	char const	str[] = "yo-les-bluds";
	int			i;
	char		**splitted;

	i = 0;
	splitted = ft_split(str, '-');
	while (splitted[i])
	{
		printf("%s\n", splitted[i]);
		i++;
	}
}
*/
