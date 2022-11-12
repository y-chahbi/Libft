/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:04:37 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/07 08:15:27 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	dex;

	dex = 0;
	while (dex < n)
	{
		if (((unsigned char *)s)[dex] == (unsigned char)c)
			return (&((unsigned char *)s)[dex]);
		dex++;
	}
	return (NULL);
}
