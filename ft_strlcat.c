/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:06:20 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/26 19:56:19 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	dex;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	dex = 0;
	if (dst_l >= dstsize)
		return (src_l + dstsize);
	while (src[dex] != '\0' && dex < dstsize - dst_l - 1)
	{
		dst[dst_l + dex] = src[dex];
		dex++;
	}
	dst[dst_l + dex] = '\0';
	return (dst_l + src_l);
}
