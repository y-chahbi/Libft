/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:19:07 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/10 08:45:06 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_lenth(int n)
{
	int	i;
	int	sig;

	sig = 0;
	if (n < 0)
		sig = -1;
	i = 0;
	while (n != 0)
	{
		if (sig < 0)
		{
			i++;
			sig++;
		}
		else
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	int				len;
	long			k;

	k = n;
	len = get_lenth(n);
	if (n == 0)
		return (ft_strdup("0"));
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	if (len != 0)
		ptr[len] = '\0';
	if (k < 0)
	{
		k = k * -1;
		ptr[0] = '-';
	}
	while (k)
	{
		ptr[len - 1] = k % 10 + 48;
		k = k / 10;
		len--;
	}
	return (ptr);
}
