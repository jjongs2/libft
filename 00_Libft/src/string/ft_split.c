/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:16:30 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/19 13:08:12 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stdlib.h"
#include "../../include/ft_string.h"

static size_t	ft_wordcnt(const char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			return (cnt);
		cnt++;
		while (*s != c && *s)
			s++;
	}
	return (cnt);
}

static char	**ft_wordclr(char **split, size_t i)
{
	while (i--)
		ft_free((void *)(split + i));
	ft_free((void *)&split);
	return (NULL);
}

static char	**ft_wordgen(const char *s, char c, size_t cnt, char **split)
{
	size_t	i;
	char	*p;

	i = 0;
	while (i < cnt)
	{
		while (*s == c)
			s++;
		p = ft_strchr(s, c);
		if (!p)
			p = ft_strchr(s, '\0');
		split[i] = ft_substr(s, 0, p - s);
		if (!split[i])
			return (ft_wordclr(split, i));
		s = p;
		i++;
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	size_t	cnt;
	char	**split;

	cnt = ft_wordcnt(s, c);
	split = ft_calloc(cnt + 1, sizeof(char *));
	if (!split)
		return (NULL);
	return (ft_wordgen(s, c, cnt, split));
}
