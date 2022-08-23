/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:31:03 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/23 09:31:03 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_free(void **p)
{
	free(*p);
	*p = NULL;
	return (NULL);
}
