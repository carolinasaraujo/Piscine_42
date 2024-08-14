/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:27 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 14:45:35 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	char	j;
	int		i;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!(j >= 'A' && j <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "HELLO123";
    char str4[] = "";
    char str5[] = "HELLO WORLD";

    printf("Test 1: %s - %d\n", str1, ft_str_is_uppercase(str1));
    printf("Test 2: %s - %d\n", str2, ft_str_is_uppercase(str2)); 
    printf("Test 3: %s - %d\n", str3, ft_str_is_uppercase(str3)); 
    printf("Test 4: %s - %d\n", str4, ft_str_is_uppercase(str4));
    printf("Test 5: %s - %d\n", str5, ft_str_is_uppercase(str5)); 

    return 0;
}*/
