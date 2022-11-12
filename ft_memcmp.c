/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:12:23 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/31 09:10:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	d;
	size_t	t;

	d = 0;
	t = 0;
	if (n == 0)
		return (0);
	while ((((unsigned char *)s1)[d] == ((unsigned char *)s2)[d])
			&& d < n - 1)
		d++;
	t = (((unsigned char *)s1)[d] - ((unsigned char *)s2)[d]);
	return (t);
}
