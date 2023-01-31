/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:08:45 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/31 20:13:23 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ('M' - (str[i] - 'N'));
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ('m' - (str[i] - 'n'));
		ft_putchar (str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}
