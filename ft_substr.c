/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:43:00 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/09 00:13:00 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*result;
	int				i;
	unsigned int	total_len;

	i = 0;
	total_len = start + len;
	result = malloc(sizeof * result * (len + 1));
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
int	main(void)
{
	char	*str;

	str = "Bonjour comment ca va?";
	printf("%s", ft_substr(str, 10, 11));

}
*/
