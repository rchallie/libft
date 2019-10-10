/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:01:52 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 11:55:42 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d ;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if(dst == src)
		return (dst);
	if(s < d)
	{
		while(len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	else
		while(len--)
			*d++ = *s++;
	return (dst);
}
