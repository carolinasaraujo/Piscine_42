/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:16:09 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 14:37:02 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	char	j;
	int		i;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!(j >= 'a' && j <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "hello123";
    char str4[] = "";
    char str5[] = "hello world";

    printf("Test 1: %s - %d\n", str1, ft_str_is_lowercase(str1));
    printf("Test 2: %s - %d\n", str2, ft_str_is_lowercase(str2));
    printf("Test 3: %s - %d\n", str3, ft_str_is_lowercase(str3));
    printf("Test 4: %s - %d\n", str4, ft_str_is_lowercase(str4));
    printf("Test 5: %s - %d\n", str5, ft_str_is_lowercase(str5)); 

    return 0;
}
*/
