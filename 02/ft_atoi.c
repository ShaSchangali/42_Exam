/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:19:00 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/28 21:45:26 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
		int i;
		int res;
		int sign;

		sign  = 1;
		res = 0;
		i = 0;
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		return (sign * res);
}

#include <stdio.h>
int main()
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n",ft_atoi(a));
}