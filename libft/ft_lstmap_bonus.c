/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:19:38 by salecler          #+#    #+#             */
/*   Updated: 2022/06/29 17:46:40 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lst2;

	if (!del || !f)
		return (NULL);
	lst2 = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (tmp == NULL)
		{
			while (lst2)
			{
				tmp = lst2->next;
				(*del)(lst2->content);
				free(lst2);
				lst2 = tmp;
			}
			return (NULL);
		}
		ft_lstadd_back(&lst2, tmp);
		lst = lst->next;
	}
	return (lst2);
}
