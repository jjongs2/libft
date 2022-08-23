/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:19:31 by kijsong           #+#    #+#             */
/*   Updated: 2022/08/23 04:55:15 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stdio.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	abs;

	if (fd < 0)
		return ;
	abs = (long long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		abs *= -1;
	}
	if (abs >= 10)
		ft_putnbr_fd(abs / 10, fd);
	ft_putchar_fd(abs % 10 + '0', fd);
}
