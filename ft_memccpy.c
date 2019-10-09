/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:33:26 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/09 17:52:01 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char cuc;
   	char *dstc;
	const char *srccc;
	size_t i;

	cuc = (unsigned char)c;
	dstc = (char *)dst;
	srccc = (const char*)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if(srccc[i] == cuc)
		{
			dst = dstc;
			return (dst + i);
		}
		i++;
	}
	return (0);
}
