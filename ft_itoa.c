/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:19:48 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/05 18:34:44 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	result[0] = '0';
	i = nb - 1;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		printf("res[i] = %c at nbr = %ld\n", result[i], nbr);
		nbr /= 10;
		i--;
	}
	if (nbr < 0)
		result[0] = '-';
	result[nb] = '\0';
	return (result);
}

int main (void)
{
	int	nb;

	nb = 350;
	printf("%s", ft_itoa(nb));
}
