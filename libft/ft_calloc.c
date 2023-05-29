/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 07:05:23 by salecler          #+#    #+#             */
/*   Updated: 2022/06/29 23:46:53 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t index, size_t len)
{
	void	*str;

	if (index == SIZE_MAX || len == SIZE_MAX)
		return (0);
	str = malloc(index * len);
	if (!str)
		return (0);
	ft_bzero(str, index * len);
	return (str);
}
