/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:12:30 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/23 05:21:02 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_ctype.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	while (ft_isspace(*str))
		str++;
	sign = (*str == '-') - (*str == '+');
	if (sign)
		str++;
	else
		sign = -1;
	while (ft_isdigit(*str))
		n = n * 10 - (*str++ - '0');
	return (n * sign);
}
