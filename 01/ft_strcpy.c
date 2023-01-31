/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:02:09 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/25 20:08:13 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dst, char *src)
{
	int	i; 

	i = 0;
	while(src[i] != '\0')
	{
		dst[i] =  src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}


int	main(void)
{
	char	*src;
	char	dst[12];
	
	src = "hello";
	ft_strcpy(dst, src);
	printf("%s", dst);
}
