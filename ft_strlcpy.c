/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:23:40 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/26 00:49:50 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_l;
	size_t	i;

	src_l = ft_strlen(src);
	i = 0;
	if (dstsize)
	{
		while (src[i] && i < (dstsize -1))
		{
				dst[i] = src[i];
				i++;
		}
		dst[i] = '\0';
	}
	return (src_l);
}
