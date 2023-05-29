/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:29:25 by salecler          #+#    #+#             */
/*   Updated: 2022/06/27 13:14:03 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char	ft_signed(int n)
{
	if (n == 1)
		return ('-');
	return ('\0');
}

char	*ft_itoa(int n)
{
	char	*aux;
	int		size;
	int		sign;
	long	m;

	sign = 0;
	m = (long)n;
	if (m < 0)
	{
		sign = 1;
		m *= -1;
	}
	size = ft_size(m);
	aux = (char *)malloc(size + sign + 1);
	if (!aux)
		return (0);
	aux[size + sign] = '\0';
	aux[0] = ft_signed(sign);
	while (size > 0)
	{
		aux[sign + size - 1] = m % 10 + '0';
		m = m / 10;
		size--;
	}
	return (aux);
}
