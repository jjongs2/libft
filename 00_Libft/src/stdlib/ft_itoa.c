/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:18:29 by kijsong           #+#    #+#             */
/*   Updated: 2022/10/03 00:07:00 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_numlen(long long num, int base)
{
	int	len;

	len = (num == 0);
	while (num)
	{
		len++;
		num /= base;
	}
	return (len);
}

char	*ft_itoa(int n, char *buf, int base)
{
	const char	digits[36] = "0123456789abcdefghijklmnopqrstuvwxyz";
	long long	num;
	int			len;

	num = n;
	if (base != 10 && num < 0)
		num = (unsigned)n;
	len = ft_numlen(num, base);
	if (num < 0)
	{
		len++;
		num *= -1;
		buf[0] = '-';
	}
	else if (num == 0)
		buf[0] = '0';
	buf[len] = '\0';
	while (num)
	{
		buf[--len] = digits[num % base];
		num /= base;
	}
	return (buf);
}
