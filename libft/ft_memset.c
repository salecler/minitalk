/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:58:53 by salecler          #+#    #+#             */
/*   Updated: 2022/06/16 23:46:09 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, unsigned int len)
{
	unsigned char	*p;

	p = str;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (str);
}
