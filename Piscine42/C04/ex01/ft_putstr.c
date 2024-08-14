/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:51:22 by caroldos          #+#    #+#             */
/*   Updated: 2024/08/01 15:54:43 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	fr;

	fr = 0;
	while (str[fr] != '\0')
	{
	fr++;
	}	
	write(1, str, fr);
}
/*
int	main(void)
{
	char	*str;

	str = "Use uma toalha";
	ft_putstr(str);
	return (0);
}*/
