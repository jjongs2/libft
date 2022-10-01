/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:19:31 by kijsong           #+#    #+#             */
/*   Updated: 2022/10/02 02:12:48 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stdio.h"
#include "../../include/ft_stdlib.h"

int	ft_putnbr_fd(int n, int fd)
{
	int		ret;
	char	*s;

	s = ft_itoa(n);
	if (!s)
		return (-1);
	ret = ft_putstr_fd(s, fd);
	ft_free((void *)&s);
	return (ret);
}
