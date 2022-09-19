/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:16:30 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/20 02:09:32 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stdlib.h"
#include "../../include/ft_string.h"

static size_t	ft_wordcnt(char *dup, const char *sep)
{
	size_t	cnt;

	cnt = 0;
	while (*dup)
	{
		dup += ft_strspn(dup, sep);
		if (!*dup)
			break ;
		cnt++;
		dup += ft_strcspn(dup, sep);
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

static char	**ft_wordgen(char *dup, const char *sep, char **split)
{
	size_t	i;
	char	*word;

	i = 0;
	word = ft_strtok(dup, sep);
	while (word)
	{
		split[i] = ft_strdup(word);
		if (!split[i])
			return (ft_wordclr(split, i));
		i++;
		word = ft_strtok(NULL, sep);
	}
	return (split);
}

char	**ft_split(const char *s, const char *sep)
{
	char	**split;
	char	*dup;

	dup = ft_strdup(s);
	split = ft_calloc(ft_wordcnt(dup, sep) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	split = ft_wordgen(dup, sep, split);
	ft_free((void *)&dup);
	return (split);
}
