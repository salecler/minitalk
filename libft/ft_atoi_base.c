#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r');
}

static int	get_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'A' && c <= 'Z')
		return (10 + (c - 'A'));
	else if (c >= 'a' && c <= 'z')
		return (10 + (c - 'a'));
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (is_whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (get_value(*str) >= 0 && get_value(*str) < base)
	{
		result = result * base + get_value(*str);
		str++;
	}
	return (result * sign);
}

