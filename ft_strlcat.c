/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:04:56 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/16 12:02:31 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < dst_len)
	{
		while (src[j] && i < dstsize)
			dst[i++] = src[j++];
		return (ft_strlen(src) + dstsize);
	}
	else
	{
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize && dst_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (ft_strlen(src) + dst_len);
	}
}
