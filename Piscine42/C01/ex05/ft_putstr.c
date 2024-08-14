/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:28:03 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/21 16:43:25 by caroldos         ###   ########.fr       */
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
}
*/
