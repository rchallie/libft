/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:41:14 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 14:53:33 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t stot_len;
	char *rtn;
	
	if (!s1 || !s2)
		return (0);	
	stot_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	rtn = malloc(sizeof(char) * stot_len);
	if (!rtn)
		return (0);
	ft_strcpy(rtn, s1);
	ft_strcat(rtn, s2);
	rtn[stot_len - 1] = '\0';
	return (rtn);
}
