/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:18:10 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/23 04:41:09 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_ctype.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c += 'A' - 'a';
	return (c);
}
