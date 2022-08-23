/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:18:29 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/23 05:23:02 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_malloc.h"

static int	ft_nbrlen(int n)
{
	int	len;

	len = (n == 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long long	abs;

	len = (n < 0) + ft_nbrlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		*str = '-';
	abs = (long long)n * ((n > 0) - (n < 0));
	while (abs)
	{
		str[--len] = abs % 10 + '0';
		abs /= 10;
	}
	return (str);
}