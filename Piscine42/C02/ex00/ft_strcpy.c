/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:21:47 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 19:40:18 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (src);
}
/*
int	main(void)
{
	char	src[] = "batata";
	char    dest[] = "doce";
	
	ft_strcpy(dest, src);
	printf("Dest:%s\n", dest);
	return (0);
}
*/
