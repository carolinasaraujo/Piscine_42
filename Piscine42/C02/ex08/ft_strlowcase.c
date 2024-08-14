/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:37:27 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/29 16:16:54 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "hello";
    char str4[] = "";
    char str5[] = "HELLO WORLD 123";

    printf("Lowercase: %s\n", ft_strlowcase(str1));
    printf("Lowercase: %s\n", ft_strlowcase(str2));
    printf("Lowercase: %s\n", ft_strlowcase(str3));
    printf("Lowercase: %s\n", ft_strlowcase(str4));
    printf("Lowercase: %s\n", ft_strlowcase(str5));

    return 0;
}
*/
