/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:19:31 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/19 14:42:00 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stdio.h"

int	ft_putnbr_fd(int n, int fd)
{
	int			err;
	long long	abs;

	abs = (long long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		abs *= -1;
	}
	err = 0;
	if (abs >= 10)
		err = ft_putnbr_fd(abs / 10, fd);
	if (!err)
		err = ft_putchar_fd(abs % 10 + '0', fd);
	return (err);
}
