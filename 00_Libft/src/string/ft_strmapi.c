/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:18:39 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/09 01:53:22 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"
#include "../../include/ft_stdlib.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	map = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	return (map);
}
