/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:32:31 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/03 13:59:19 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bsearch(const void *key, const void *base, size_t nel, size_t width, int (*cmp)(const void *, const void *))
{
	const void	*mid;
	int			sign;

	while (nel)
	{
		mid = (const char *)base + (nel / 2) * width;
		sign = cmp(key, mid);
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
