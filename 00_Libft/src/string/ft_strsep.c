/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:58:45 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/12 22:24:38 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_string.h"

char	*ft_strsep(char **stringp, const char *sep)
{
	char	*s;
	char	*end;

	s = *stringp;
	if (!s)
		return (NULL);
	end = s + ft_strcspn(s, sep);
	if (*end)
		*end++ = '\0';
	else
		end = NULL;
	*stringp = end;
	return (s);
}
