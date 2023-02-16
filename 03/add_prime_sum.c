/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:19:26 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/05 23:41:51 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int n;
	
	i = 0;
	n = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		n *= 10 + str[i] - '0';
		i++;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	char	c;

	if(n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int is_prime(int n)
{
	int i;

	i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int add_prime_sum(int n)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while(i <= n)
	{
		if(is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	int n;
	
	n = 0;
	if(argc == 2 && (n = ft_atoi(argv[1])))
		ft_putnbr(add_prime_sum(n));
	else 
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
