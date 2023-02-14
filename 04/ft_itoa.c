/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:05:36 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/08 22:22:15 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int absoulute_nbr(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	get_len(int nbr)
{
	int i;

	i = 0;
	if(nbr <= 0)
		i++;
	while(nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int i;
	char *res;
	
	i = get_len(nbr);
	res = (char*)malloc(sizeof(char) * (i + 1));
	res[i] = '\0';

	if(nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0';

	while(nbr != 0)
	{
		i--;
		res[i] = absoulute_nbr(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}
