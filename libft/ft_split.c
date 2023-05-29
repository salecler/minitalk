/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:29:45 by salecler          #+#    #+#             */
/*   Updated: 2022/06/29 23:44:29 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_w(char const *s, char c)
{
	int	n;

	n = 0;
	while (s[n] != c && s[n] != '\0')
		n++;
	return (n);
}

static int	ft_nbr_w(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			n++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (n);
}

static char	**ft_free_w(char **w, int pos_w)
{
	while (pos_w >= 0)
	{
		free(w[pos_w]);
		pos_w--;
	}
	free(w);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**w;
	int		nbr_w;
	int		pos_w;
	int		n;

	if (!s)
		return (NULL);
	nbr_w = ft_nbr_w(s, c);
	w = (char **)malloc(sizeof(char *) * (nbr_w + 1));
	if (!w)
		return (NULL);
	w[nbr_w] = NULL;
	pos_w = 0;
	n = 0;
	while (pos_w < nbr_w)
	{
		while (s[n] == c)
			n++;
		w[pos_w] = ft_substr(s, n, ft_len_w(s + n, c));
		if (!w[pos_w])
			return (ft_free_w(w, pos_w));
		n += ft_len_w(s + n, c);
		pos_w++;
	}
	return (w);
}
