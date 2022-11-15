/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:52:26 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/31 09:03:32 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_it(char target, char const *set)
{
	int	dex;

	dex = 0;
	while (set[dex] != '\0')
	{
		if (set[dex] == target)
			return (1);
		dex++;
	}
	return (0);
}

static int	ft_start(char const *s1, char const *set)
{
	int	dex;
	int	d_start;

	dex = 0;
	d_start = 0;
	while (s1[dex] != '\0' && check_it(s1[dex], set) == 1)
	{
		d_start++;
		dex++;
	}
	return (d_start);
}

static int	ft_end(char const *s1, char const *set, int d_start)
{
	int	dex;
	int	d_end;

	dex = ft_strlen(s1) - 1;
	d_end = 0;
	while (dex > d_start && dex >= 0 && check_it(s1[dex], set) == 1)
	{
		d_end++;
		dex--;
	}
	return (d_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		d_start;
	int		d_end;
	int		b_k;
	int		i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	d_start = ft_start(s1, set);
	d_end = ft_end(s1, set, d_start);
	b_k = ft_strlen(s1) - (d_start + d_end) + 1;
	ptr = malloc((b_k) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < b_k - 1)
	{
		ptr[i] = s1[d_start];
		d_start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
