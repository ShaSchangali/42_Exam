/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:36:54 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/05 18:52:51 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while(str[i] != '\0')
	{
		n *= 10;
		n = n + str[i] - '0';
		i++;
	}
	return (n);
}

void	print_hex(int n)
{
	char hex_digit[] = "0123456789abcdef";
	if(n >= 16)
		print_hex(n / 16);
	write(1, &hex_digit[n % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
