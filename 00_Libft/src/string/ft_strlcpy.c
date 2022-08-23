/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:17:02 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/23 05:26:09 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*d;

	d = dst;
	if (size--)
	{
		while (size-- && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (dst - d + ft_strlen(src));
}
