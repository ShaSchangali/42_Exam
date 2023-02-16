/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:48:08 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/05 00:54:32 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char const *str)
{
	int i;
    
    i  = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char const *argv[])
{
	int i; 
	int j;  

    i = 0;
    j = 0;
	if (argc == 3)
	{
		while (argv[2][j])
        {
			if (argv[2][j++] == argv[1][i])
            {
				i++;
                j++;
            }
        }
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}