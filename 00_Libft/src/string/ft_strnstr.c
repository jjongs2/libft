/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:04:30 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/03 00:52:58 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;

	if (!*s2)
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	while (*s1 && s2_len <= n--)
	{
		if (!ft_strncmp(s1, s2, s2_len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
