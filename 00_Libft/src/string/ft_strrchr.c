/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:23:25 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/01 02:26:26 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*p;
	size_t				i;

	i = ft_strlen(s) + 1;
	c = (unsigned char)c;
	p = (const unsigned char *)s;
	while (i--)
	{
		if (p[i] == c)
			return ((char *)(p + i));
	}
	return (NULL);
}
