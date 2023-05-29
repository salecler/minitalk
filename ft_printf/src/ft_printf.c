/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:32:02 by salecler          #+#    #+#             */
/*   Updated: 2022/08/29 16:13:54 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			len;
	int			i;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += format_type(args, str[i + 1]);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

int	format_type(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == '%')
		len += ft_putchar('%');
	else if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	else
		len += ft_putstr(va_arg(args, char *));
	return (len);
}
