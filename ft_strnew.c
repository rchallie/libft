/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:12:38 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 16:16:00 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *rtn;

	rtn = malloc(sizeof(char) * size + 1);
	if(!rtn)
		return (0);
	ft_bzero(rtn, size + 1);
	return (rtn);
}
