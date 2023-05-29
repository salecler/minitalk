/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:44:10 by salecler          #+#    #+#             */
/*   Updated: 2022/06/23 14:32:50 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*origin;
	unsigned char	*destination;

	origin = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (origin > destination)
	{
		while (size--)
			*destination++ = *origin++;
	}
	if (origin < destination)
	{
		origin += size - 1;
		destination += size - 1;
		while (size--)
			*destination-- = *origin--;
	}
	return (dst);
}
