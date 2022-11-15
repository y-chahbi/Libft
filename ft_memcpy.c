/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:50:10 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/31 09:11:35 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	dex;

	dex = 0;
	if ((src == dst) || n == 0)
		return (dst);
	while (dex < n)
	{
		((char *)dst)[dex] = ((char *)src)[dex];
		dex++;
	}
	return (dst);
}
