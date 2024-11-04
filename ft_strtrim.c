/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:51:21 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 00:20:22 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*trim(const char *s1, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	i = 0;
	if (end <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = malloc(sizeof(char *) * end + 1);
	if (!str)
		return (NULL);
	while (i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) + 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(" "));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (trim(s1, i, j - (i - 1)));
}

/*
int	main(void)
{
	char	*set;

	char *str = "ababaaaMy name is Simonbbaaabbad"; // 17
	set = "ab";
	printf("%s", ft_strtrim(str, set));
}
*/
