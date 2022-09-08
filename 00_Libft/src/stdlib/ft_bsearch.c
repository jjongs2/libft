/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:32:31 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/08 13:30:08 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_compare(const void *p1, const void *p2)
{
	return (*(const int *)p1 - *(const int *)p2);
}

void	*ft_bsearch(const void *key, const void *base, size_t nel, size_t width)
{
	const void	*mid;
	int			sign;

	while (nel)
	{
		mid = (const char *)base + (nel / 2) * width;
		sign = ft_compare(key, mid);
		if (sign < 0)
			nel /= 2;
		else if (sign > 0)
		{
			base = (const char *)mid + width;
			nel -= nel / 2 + 1;
		}
		else
			return ((void *)mid);
	}
	return (NULL);
}
