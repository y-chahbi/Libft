/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:43:15 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/31 09:03:31 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			d;

	if (n == 0)
		return (0);
	d = 0;
	while (d < (n - 1) && s1[d] && s2[d]
		&& (unsigned char)s1[d] == (unsigned char)s2[d])
		d++;
	return ((unsigned char)s1[d] - (unsigned char)s2[d]);
}
