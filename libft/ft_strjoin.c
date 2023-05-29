/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:40:16 by salecler          #+#    #+#             */
/*   Updated: 2022/06/30 02:11:08 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_utils(char const *s1, char const *s2, char *cpy)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		cpy[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		cpy[j] = s2[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;
	int		auxs1;
	int		auxs2;

	if (!s1 || !s2)
		return (0);
	auxs1 = ft_strlen(s1);
	auxs2 = ft_strlen(s2);
	cpy = (char *)malloc(auxs1 + auxs2 + 1);
	if (!cpy)
		return (0);
	ft_utils(s1, s2, cpy);
	return (cpy);
}
