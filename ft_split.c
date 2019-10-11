/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:51:19 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/11 16:20:30 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hm(char const *s, char c)
{
	size_t rtn;
	int mode;

	rtn = 0;
	mode = 1;
	while (*s)
	{
		if(*s == c && mode == 0)
		{
			rtn++;
			mode = 1;
		}
		else if(*s != c && mode == 1)
			mode = 0;
		s++;
	}
	return (rtn);
}

char	**ft_rtn_init(const char *s, char c, char **rtn)
{
	int mode;
	int count;
	int i;

	mode = 1;
	count = 0;
	i = 0;
	while (*s)
	{
		if ((*s == c && mode == 0) || (mode == 0 && *(s+1) == '\0'))
		{
			if (*(s+1) == '\0')
				count++;
			mode = 1;
			rtn[i] = malloc(sizeof(char) * (count + 1));
		   	if(!rtn[i])
				return (0);
			i++;
			count = 0;
		}
		else if (*s != c && mode == 1)
			mode = 0;
		if (*s != c)
			count++;
		s++;
	}
	return (rtn);
}

char	**ft_rtn_ins(const char *s, char c, char **rtn)
{
	int mode;
	int count;
	int i;

	mode = 1;
	count = 0;
	i = 0;
	while (*s)
	{
		if ((*s == c && mode == 0) || (mode == 0 && *(s+1) == '\0'))
		{
			if (*(s+1) == '\0')
			{
				rtn[i][count] = *s;
				count++;
			}
			mode = 1;
			rtn[i][count] = '\0';
			ft_putnbr(i);
			ft_putstr (" : ");
			ft_putstr(rtn[i]);
			ft_putstr(", ");
			i++;
			count = 0;
		}
		else if (*s != c && mode == 1)
			mode = 0;
		if (*s != c)
		{
			rtn[i][count] = *s;
			count++;
		}
		s++;
	}
	return (rtn);	
}

char	**ft_strsplit(char const *s, char c) //ATTENTION NOM
{
	char **rtn;
	size_t nbr_w;

	if(!s)
		return (0);
	nbr_w = ft_hm(s,c);
	rtn = malloc(sizeof(char *) * nbr_w + 1);
	if(!rtn)
		return (0);
	rtn[nbr_w] = (void *)0;
	rtn = ft_rtn_init(s,c,rtn);
	rtn = ft_rtn_ins(s,c,rtn);
	return (rtn);	
}
