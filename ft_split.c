/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:13 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/03 14:39:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wd_count(char const *s, char c)
{
	int	dex;
	int	wd_count;

	dex = 0;
	wd_count = 0;
	while (s[dex] != '\0')
	{
		if (dex == 0 && s[dex] != c)
			wd_count++;
		if (s[dex] == c && s[dex + 1] != c)
			wd_count++;
		dex++;
	}
	return (wd_count);
}

static int	wd_lenth(char const *s, char c)
{
	int	wd_lenth;

	wd_lenth = 0;
	while (s[wd_lenth] != '\0' && s[wd_lenth] != c)
		wd_lenth++;
	return (wd_lenth);
}

static int	while_free(char **ptr, int dey)
{
	while (dey >= 0)
	{
		dey--;
		free(ptr[dey]);
	}
	free(ptr);
	return (0);
}

static int	while_it(char const *s, char c, char **ptr, int wd_c)
{
	int		dex;
	int		dey;
	int		wd_l;

	dex = 0;
	dey = 0;
	while (dey < wd_c && s[dex] != '\0')
	{
		if (s[dex] == c)
			dex++;
		while (s[dex] != '\0' && s[dex] != c)
		{
			wd_l = wd_lenth(s + dex, c);
			ptr[dey] = ft_substr(s, dex, wd_l);
			if (!ptr[dey])
				while_free(ptr, dey);
			dey++;
			dex += wd_l;
		}
		dex++;
	}
	ptr[dey] = (NULL);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		wd_c;

	if (!s)
		return (NULL);
	wd_c = wd_count(s, c);
	ptr = malloc(sizeof(char *) * (wd_c + 1));
	if (!ptr)
		return (NULL);
	if (while_it(s, c, ptr, wd_c) == 0)
		return (NULL);
	return (ptr);
}
