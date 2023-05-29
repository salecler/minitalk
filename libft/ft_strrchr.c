/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:59:17 by salecler          #+#    #+#             */
/*   Updated: 2022/06/29 23:47:45 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*t;
	unsigned char	d;

	d = (unsigned char)c;
	t = s;
	while (*s)
		s++;
	while (s != t)
	{
		if (*s == d)
			return ((char *)s);
		s--;
	}
	if (*s == d)
		return ((char *)s);
	return (NULL);
}
