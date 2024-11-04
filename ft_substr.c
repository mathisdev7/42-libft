/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:43:00 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/04 19:49:50 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *result;
	int	i;
	unsigned int	total_len;

	i = 0;
	total_len = start + len;
	result = malloc(sizeof(char *) * (len - start));
	while (total_len != start)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int main()
{
	char *str = "Bonjour comment ca va?";
	printf("%s", ft_substr(str, 5, 8));
}
*/