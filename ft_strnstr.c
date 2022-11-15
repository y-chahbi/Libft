/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:43:47 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/15 11:02:51 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	dex;
	size_t	dox;
	size_t	lenth;

	if (needle[0] == '\0')
		return ((char *)haystack);
	dex = 0;
	dox = 0;
	lenth = ft_strlen(needle);
	while (dex < len && haystack[dex] != '\0')
	{
		if (haystack[dex] == needle[dox])
		{
			dox = dox + 1;
			if (lenth == dox)
				return (&((char *)haystack)[dex - (dox - 1)]);
		}
		else
		{
			dex = dex - dox ;
			dox = 0;
		}
		dex++;
	}
	return (0);
}
