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

int	get_len(int n)
{
	int i;

	i = 0;
	if(n <= 0)
		i++;
	while(n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int i;
	char *res;
	
	i = get_len(n);
	res = (char*)malloc(sizeof(char) * (i + 1));
	res[i] = '\0';

	if(n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';

	while(n != 0)
	{
		i--;
		res[i] = absoulute_nbr(n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
