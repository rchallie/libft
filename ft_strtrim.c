/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:54:46 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/16 16:28:28 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_snew(size_t size)
{
	char *rtn;

	rtn = malloc(sizeof(char) * size + 1);
	if (!rtn)
		return (0);
	ft_bzero(rtn, size + 1);
	return (rtn);
}

static size_t	ft_estim_start(const char *s1, const char *set)
{
	size_t i;
	size_t j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
			if (set[j] == s1[i])
				break ;
			else
				j++;
		if (set[j] != s1[i])
			return (i);
		i++;
	}
	return (0);
}

static size_t	ft_estim_end(const char *s1, const char *set)
{
	size_t i;
	size_t j;
	size_t len;

	len = ft_strlen(s1);
	i = len - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
			if (set[j] == s1[i])
				break ;
			else
				j++;
		if (set[j] != s1[i])
			return ((len - i) - 1);
		i--;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*rtn;

	if (!s1 || !set)
		return (rtn = NULL);
	start = ft_estim_start(s1, set);
	end = ft_estim_end(s1, set);
	len = (ft_strlen(s1) - (start + end));
	if ((int)len < 0)
	{
		if (!(rtn = ft_snew(1)))
			return (rtn = NULL);
	}
	else
	{
		if (!(rtn = ft_snew(len)))
			return (0);
		ft_strlcpy(rtn, (const char *)(s1 + (start)), len + 1);
	}
	return (rtn);
}
