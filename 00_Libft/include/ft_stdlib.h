/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:29:46 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/04 00:21:39 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

void	*ft_bsearch(const void *key, const void *base, size_t nel, size_t width, int (*cmp)(const void *, const void *));

#endif
