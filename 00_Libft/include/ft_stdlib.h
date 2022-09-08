/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:29:46 by kijsong           #+#    #+#             */
/*   Updated: 2022/09/08 13:36:50 by kijsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

void	*ft_calloc(size_t count, size_t size);
void	*ft_free(void **p);

void	*ft_bsearch(const void *key, const void *base, size_t nel, size_t width);

#endif
