/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:05:40 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 14:40:55 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *rtn;
	size_t i;
	
	if (!s)
		return (0);
	rtn = malloc(sizeof(char) * len + 1);
	i = 0;
	if(!rtn)
		return (0);
	while(i < len)
	{
		rtn[i] = s[i + start];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
