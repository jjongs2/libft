/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:04:30 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/01 02:37:53 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && n--)
	{
		i = 0;
		while (s1[i] == s2[i] && i <= n)
		{
			if (!s2[++i])
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
