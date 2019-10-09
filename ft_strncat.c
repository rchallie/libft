/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:50:23 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/09 15:04:49 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t c;

	i = 0;
	c = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[c + i] = s2[i];
	   	i++;
	}
	s1[c + i] = '\0';
	return (s1);
}
