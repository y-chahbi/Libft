/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:43:12 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/27 11:08:44 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		new = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = new;
	}
	*lst = NULL;
}
