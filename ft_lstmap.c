/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:24:59 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/26 15:17:39 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pedri;
	t_list	*youssef;

	if (!lst || !*f || !del)
		return (NULL);
	youssef = NULL;
	while (lst)
	{
		pedri = ft_lstnew(f(lst->content));
		if (!pedri)
			ft_lstclear(&youssef, del);
		ft_lstadd_back(&youssef, pedri);
		lst = lst->next;
	}
	return (youssef);
}
