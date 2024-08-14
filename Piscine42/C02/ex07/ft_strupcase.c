/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:32:19 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 16:03:58 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "HELLO";
    char str4[] = "";
    char str5[] = "hello world 123";

    printf("Uppercase: %s\n", ft_strupcase(str1));
    printf("Uppercase: %s\n", ft_strupcase(str2));
    printf("Uppercase: %s\n", ft_strupcase(str3));
    printf("Uppercase: %s\n", ft_strupcase(str4));
    printf("Uppercase: %s\n", ft_strupcase(str5));

    return 0;
}
*/
