/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:29:57 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/11 15:56:56 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_estim(long n)
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

char	*ft_itoa(int n)
{
    int len;
    char *rtn;
    int isneg;
	long nbr;

	nbr = n;
    len = ft_estim(nbr);
	if (n != 0)
    	rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));	
	if (!rtn)
      return (0);
    isneg = 0;
	if(n < 0)
    {
        isneg++;
        nbr = -nbr;
    }
    rtn[len] = '\0';
    while (--len)
    {
        rtn[len] = (nbr % 10) + '0';
        nbr /= 10;
    }
	if(isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
    return (rtn);
}
