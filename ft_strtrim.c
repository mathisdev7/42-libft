/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:51:21 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/06 22:59:16 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	int		start;
	int		end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	result = malloc(sizeof(char *) * (end - start) + 1);
	ft_strlcpy(result, &s1[start], end - start + 2);
	return (result);
}

// int	main(void)
// {
// 	char	*set;

// 	char *str = "lorem ipsum dolor sit amet"; 
// 	set = "te";
// 	printf("%s", ft_strtrim(str, set));
// }
