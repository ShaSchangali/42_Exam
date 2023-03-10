/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:37:29 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/23 23:37:58 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	str[] = "Putchar test";
	if(argc == 2)
	{
		printf("%d\n", ft_strlen(str));
	}
	return (0);
}
*/