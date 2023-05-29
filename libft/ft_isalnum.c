/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:36:46 by salecler          #+#    #+#             */
/*   Updated: 2022/06/13 18:11:53 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(unsigned int k)
{
	if (k >= 48 && k <= 57)
		return (1);
	else if (k >= 65 && k <= 90)
		return (1);
	else if (k >= 97 && k <= 122)
		return (1);
	return (0);
}