/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:54:46 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 18:57:37 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_estim_start(const char *s1, const char *set)
{
	size_t i;
	size_t j;

	i = 0;
	while(s1[i])
	{
		j = 0;
		while(set[j])
			if(set[j] == s1[i])
				break;
			else
				j++;
		if(set[j] != s1[i])
			return (i);
		i++;
	}
	return (0);
}

size_t	ft_estim_end(const char *s1, const char *set)
{
	size_t i;
	size_t j;
	size_t len;
	
	len = ft_strlen(s1);
	i = len - 1;
	while(i >= 0)
	{
		j = 0;
		while(set[j])
			if(set[j] == s1[i])
				break;
			else
				j++;
		if(set[j] != s1[i])
			return ((len - i) - 1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t len;
	char *rtn;

	start = ft_estim_start(s1, set);
	end = ft_estim_end(s1, set);
	len = ft_strlen(s1) - (start + end);
	rtn = ft_strnew(len + 1);
	ft_strncpy(rtn, (const char *)(s1 + (start - 1)), len);
	rtn[len - 1] = '\0';
	return (rtn);
}

/*int main()
{	
	char *test = ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n", " \t\n");
	ft_putstr(test);
	return (0);
}*/
