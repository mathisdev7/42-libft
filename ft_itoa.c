/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:19:48 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 00:14:34 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	s_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	num_len(int n, int index)
{
	if (n < 0)
	{
		index++;
		n = -n;
	}
	if (n <= 10)
	{
		return (index + 1);
	}
	else
	{
		return (num_len(n / 10, index + 1));
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	int		nb;
	int		i;
	long	nbr;

	nbr = n;
	nb = num_len(n, 0);
	result = malloc(sizeof(char) * nb + 1);
	if (!result)
		return (NULL);
	result[0] = 0;
	if (nbr < 0)
		nbr = -nbr;
	i = nb - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[nb] = '\0';
	return (result);
}

/*
int main (void)
{
	int	nb;

	nb = 1220;
	printf("%s", ft_itoa(nb));
}
*/
