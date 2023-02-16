/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:56:14 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/02 19:02:07 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

#include <stdio.h>

char	*ft_strdub(char *src)
{
	char *dst;
	int	len;
	int i;

	len = 0;
	while(src[len] != '\0')
		len++;
	dst = (char*)malloc(sizeof(char) * (len - 1));
	i = 0;
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char *str;
	char *new_str;
	str = "New String";
	new_str = ft_strdub(str);
	printf("%s", new_str);
}

