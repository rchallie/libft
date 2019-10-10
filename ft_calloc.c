/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:33:10 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 14:12:58 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *rtn;
	(void)count;

	rtn = malloc(size * count);
	if(!rtn)
		return (NULL);
	ft_bzero(rtn, count);
	return (rtn);
}
