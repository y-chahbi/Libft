/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:32:24 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/26 20:35:13 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	dex;

	if (!s)
		return ;
	dex = 0;
	while (s[dex] != '\0')
	{
		write(fd, &s[dex], 1);
		dex++;
	}
	write(fd, "\n", 1);
}
