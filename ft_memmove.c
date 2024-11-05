/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:34:36 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 23:55:10 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	const unsigned char	*tmp_src;
	if (!dst || !src)
		return (NULL);

	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	if (tmp_dst > tmp_src)
	{
		tmp_dst += n;
		tmp_src += n;
		while (n--)
    		*(--tmp_dst) = *(--tmp_src);
	}
	else
		while (n--)
			*(tmp_dst++) = *(tmp_src++);

	return (dst);
}
