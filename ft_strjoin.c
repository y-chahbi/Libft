/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:45:01 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/26 20:19:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		dex;
	size_t		dexx;
	char		*ptr;

	if (!s1 || !s2)
		return (NULL);
	dex = 0;
	dexx = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (dex < ft_strlen(s1))
	{
		ptr[dex] = s1[dex];
		dex++;
	}
	while (dexx < ft_strlen(s2))
		ptr[dex++] = s2[dexx++];
	ptr[dex] = '\0';
	return (ptr);
}
