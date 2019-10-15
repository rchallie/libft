/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:39:03 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/15 10:54:42 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = 0;
	if (!s || !(rtn = ft_strdup(s)))
		return (0);
	while (s[i])
	{
		rtn[i] = (*f)(i, s[i]);
		i++;
	}
	return (rtn);
}
