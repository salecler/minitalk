/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:56:09 by salecler          #+#    #+#             */
/*   Updated: 2022/08/29 15:58:01 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

//Main archive
int	ft_printf(const char *str, ...);
int	format_type(va_list args, char format);

//Utils archive
int	ft_strlenf(char *str);
int	ft_putchar(char c);
int	ft_putstr(char *str);

//Formats archive
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned long n, char *base);
int	ft_puthex(size_t n, char *base);
int	ft_putptr(void *n);
#endif
