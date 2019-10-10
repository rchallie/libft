/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:29:57 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 18:01:54 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_estim(int n)
{
	size_t estim;
	int isneg;
	
	estim = 0;
	isneg = 0;	
	if(n < 0)
	{
		estim++;
		isneg++;
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

char	*ft_iszero()
{
	char *rtn;

	rtn = malloc(sizeof(char) * 2);
	rtn[0] = '0';
	rtn[1] = '\0';
	return (rtn);
}

char	*ft_itoa(int n)
{
    int len;
    char *rtn;
    int isneg;

    len = ft_estim(n);
	if (n == (-2147483647 -1))
      	return (rtn = ft_strdup("-2147483648"));
	else if (n != 0)
    	rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_iszero());	
	if (!rtn)
      return (0);
    isneg = 0;
	if(n < 0)
    {
        isneg++;
        n = -n;
    }
    rtn[len] = '\0';
    while (--len)
    {
        rtn[len] = (n % 10) + '0';
        n /= 10;
    }
	if(isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (n % 10) + '0';
    return (rtn);
}
