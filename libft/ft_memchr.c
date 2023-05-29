/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:43:19 by salecler          #+#    #+#             */
/*   Updated: 2022/06/23 14:39:01 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int k, size_t size)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	n;

	i = 0;
	aux = (unsigned char *)str;
	n = (unsigned char)k;
	while (size > i)
	{
		if (aux[i] == n)
			return ((void *)aux + i);
		i++;
	}
	return (0);
}
