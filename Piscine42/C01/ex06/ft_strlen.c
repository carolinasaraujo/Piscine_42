/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:57:43 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/22 15:43:45 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
/*
int	main(void)
{
	char	*str;
	int	cont;
	str = "Renaissance way";
	cont = ft_strlen(str);
	printf("Numero de caracteres na string: %i", cont);
	return (0);
}
*/
