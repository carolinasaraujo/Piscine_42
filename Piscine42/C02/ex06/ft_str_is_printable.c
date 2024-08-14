/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:08:58 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 15:54:46 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	char	j;
	int		i;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!(j >= 32 && j <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello\nWorld";
    char str3[] = "Hello\tWorld";
    char str4[] = "";
    char str5[] = "Hello\x7FWorld";

    printf("Test 1: %s - %d\n", str1, ft_str_is_printable(str1));
    printf("Test 2: %s - %d\n", str2, ft_str_is_printable(str2));
    printf("Test 3: %s - %d\n", str3, ft_str_is_printable(str3));
    printf("Test 4: %s - %d\n", str4, ft_str_is_printable(str4));
    printf("Test 5: %s - %d\n", str5, ft_str_is_printable(str5)); 

    return 0;
}*/
