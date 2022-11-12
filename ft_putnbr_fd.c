/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:44:47 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/11 14:56:21 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	mv;
	unsigned int	tmp;

	if (n < 0)
	{
		mv = -n;
		write(fd, "-", 1);
	}
	else
		mv = n;
	if (mv <= 9)
	{
		tmp = mv + 48;
		write(fd, &tmp, 1);
	}
	else
	{
		ft_putnbr_fd(mv / 10, fd);
		ft_putnbr_fd(mv % 10, fd);
	}
}
int main()
{
	ft_putnbr_fd(1000,1);
}