/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:33:26 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/14 17:07:22 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		cuc;
	unsigned char		*dstc;
	const unsigned char	*srccc;
	size_t				i;

	cuc = (unsigned char)c;
	dstc = (unsigned char *)dst;
	srccc = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if (srccc[i] == cuc)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
