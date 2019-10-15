/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:41:14 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/15 14:02:13 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cat(char *s1, const char *s2)
{
	int i;
	int c;

	i = 0;
	c = ft_strlen(s1);
	while (s2[i])
	{
		s1[c + i] = s2[i];
		i++;
	}
	s1[c + i] = '\0';
	return (s1);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	stot_len;
	char	*rtn;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	stot_len = s1_len + s2_len + 1;
	rtn = malloc(sizeof(char) * stot_len);
	if (!rtn)
		return (0);
	ft_strlcpy(rtn, s1, s1_len);
	ft_cat(rtn, s2);
	rtn[stot_len - 1] = '\0';
	return (rtn);
}
