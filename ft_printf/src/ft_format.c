/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:55:55 by salecler          #+#    #+#             */
/*   Updated: 2022/08/29 16:10:27 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nbr;
	static int	len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	len++;
	ft_putchar(nbr + '0');
	if (n < 0)
		len++;
	return (len);
}

int	ft_putnbr_base(unsigned long n, char *base)
{
	long int	nbr;
	static int	len;

	nbr = (unsigned int)n;
	len = 0;
	if (nbr >= ft_strlenf(base))
	{
		ft_putnbr_base(nbr / ft_strlenf(base), base);
		nbr = nbr % ft_strlenf(base);
	}
	len++;
	ft_putchar(base[nbr]);
	return (len);
}

int	ft_puthex(size_t n, char *base)
{
	static int	len;

	len = 0;
	if (n >= 16)
	{
		ft_puthex(n / 16, base);
		n = n % 16;
	}
	len++;
	ft_putchar(base[n]);
	return (len);
}

int	ft_putptr(void *n)
{
	int			len;
	size_t		nbr;
	char		*base;

	len = 0;
	nbr = (size_t)n;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	len += 2;
	len += ft_puthex(nbr, base);
	return (len);
}
