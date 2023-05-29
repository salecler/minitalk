/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:36:58 by salecler          #+#    #+#             */
/*   Updated: 2022/06/23 12:36:09 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *)s);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		j = 0;
		while (s[i + j] == find[j] && find[j] != '\0' && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
