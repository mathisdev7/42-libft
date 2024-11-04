/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 07:41:04 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 00:19:11 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
	{
		dst_len = src_len;
	}
	if (dst_len == dstsize)
	{
		return (dst_len + src_len);
	}
	if ((dstsize - dst_len) > src_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, dst_len - 1);
		dst[dstsize - 1] = 0;
	}
	return (dst_len + src_len);
}
