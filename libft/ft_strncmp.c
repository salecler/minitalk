/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:36:29 by salecler          #+#    #+#             */
/*   Updated: 2022/06/23 14:52:12 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < size && s1[i] != '\0')
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
