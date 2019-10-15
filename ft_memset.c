/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:57:14 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/14 16:57:50 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buc;

	i = 0;
	buc = (unsigned char *)b;
	while (i < len)
	{
		buc[i] = c;
		i++;
	}
	return (b = buc);
}
