/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:39:41 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 00:17:04 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	int				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (tmp_dst > tmp_src)
	{
		while (len > 0)
		{
			tmp_dst[len] = tmp_src[len];
			len--;
		}
	}
	else
	{
		while (len > i)
			tmp_dst[i++] = tmp_src[i];
	}
	return (dst);
}
