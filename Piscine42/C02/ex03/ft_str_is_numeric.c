/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:21:09 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 14:23:52 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	char	j;
	int		i;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!(j >= '0' && j <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Hell no:%d\n", ft_str_is_numeric("Hell no"));
	printf("H3ll n0:%d\n", ft_str_is_numeric("H3ll n0"));
	printf("1234:%d\n", ft_str_is_numeric("1234"));


	return (0);
}
*/
