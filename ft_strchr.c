/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:24:42 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/31 09:11:38 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	dex;

	dex = 0;
	while (s[dex] != '\0')
	{
		if (s[dex] == c)
			return (&((char *)s)[dex]);
		dex++;
	}
	if (s[dex] == c)
		return (&((char *)s)[dex]);
	return (NULL);
}
