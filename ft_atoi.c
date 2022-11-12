/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:09:34 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/09 14:47:00 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	dex;
	int	sign;
	int	rslt;

	dex = 0;
	sign = 1;
	rslt = 0;
	while ((str[dex] >= 9 && str[dex] <= 13)
		|| str[dex] == 32)
		dex++;
	if (str[dex] == '-' || str[dex] == '+')
	{
		if (str[dex] == '-')
		{
			sign = sign * -1;
		}
		dex++;
	}
	while (ft_isdigit(str[dex]) == 1)
	{
		rslt = (rslt * 10) + (str[dex] - 48);
		dex++;
	}
	return (rslt * sign);
}
