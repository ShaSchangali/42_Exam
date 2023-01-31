/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:57:26 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/30 21:03:04 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			ft_putchar('_');
			str[i] += ' ';
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	ft_putchar('\n');
	return (0);
}
