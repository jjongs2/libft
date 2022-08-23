/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:20:50 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/02 01:07:43 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*(const unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		if (!*s)
			break ;
		s++;
	}
	return (NULL);
}
