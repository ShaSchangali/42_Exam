/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:48:08 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/05 00:54:32 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int get_digit(char c, int n)
{
	int max_digit;

	if (n <= 10)
		max_digit = n + '0';
	else
		max_digit = n - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	int digit;
    int i;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * str_base + digit;
		i++;
	}
	return (sign * res);
}

#include <stdio.h>
int main()
{
	char *a = "12fdb3";
	printf("%d\n",ft_atoi_base(a, 16));
}