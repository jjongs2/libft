/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:53:47 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/11 00:41:54 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"

size_t	ft_strspn(const char *s, const char *set)
{
	const char	*p;
	char		table[256];

	ft_memset(table, 0, sizeof(table));
	while (*set)
		table[*(const unsigned char *)set++] = 1;
	p = s;
	while (*p && table[*(const unsigned char *)p])
		p++;
	return (p - s);
}
