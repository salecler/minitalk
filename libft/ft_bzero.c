/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:19:27 by salecler          #+#    #+#             */
/*   Updated: 2022/06/15 08:29:45 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, unsigned int len)
{
	unsigned char	*aux;

	aux = str;
	while (len > 0)
	{
		*aux = 0;
		aux++;
		len--;
	}
	return (str);
}
