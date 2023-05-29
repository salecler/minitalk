/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:17:16 by salecler          #+#    #+#             */
/*   Updated: 2022/06/29 22:35:30 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	d;

	d = (unsigned char)c;
	while (*str != '\0')
	{
		if (*str == d)
			return ((char *)str);
		str++;
	}
	if (d == *str)
		return ((char *)str);
	return (0);
}
