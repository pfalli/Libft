/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:26:35 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/27 18:23:03 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	while (len >= 0)
	{
		if (str[len] == c)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return (0);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	const char *testString = "Hello, World!";
//	int targetChar1 = 'o';
//	int targetChar2 = 'z';
//
//	// Test case 1: character found
//	char *result1 = ft_strrchr(testString, targetChar1);
//	if (result1 != NULL)
//	{
//		printf("Character '%c' found at position: %ld\n", targetChar1, result1
//			- testString);
//	}
//	else
//	{
//		printf("Character '%c' not found in the string.\n", targetChar1);
//	}
//
//	// Test case 2: character not found
//	char *result2 = ft_strrchr(testString, targetChar2);
//	if (result2 != NULL)
//	{
//		printf("Character '%c' found at position: %ld\n", targetChar2, result2
//			- testString);
//	}
//	else
//	{
//		printf("Character '%c' not found in the string.\n", targetChar2);
//	}
//
//	return (0);
//}