/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:38:45 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/07 18:59:59 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if((str[i] >= 'a' && str[i] <= 'z') 
			&& (str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\0'))
			str[i] -= 32;
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	if(argc == 1)
		ft_putchar('\n');
	else 
	{
		i = 1;
		while(i < argc)
		{
			rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
