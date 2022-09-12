/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:57:05 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/12 22:24:15 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"

char	*ft_strtok(char *s, const char *sep)
{
	static char	*p;

	if (!s)
		s = p;
	if (!s)
		return (NULL);
	s += ft_strspn(s, sep);
	if (!*s)
	{
		p = NULL;
		return (NULL);
	}
	p = s + ft_strcspn(s, sep);
	if (*p)
		*p++ = '\0';
	else
		p = NULL;
	return (s);
}
