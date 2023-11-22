/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:57:38 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:21:07 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// it works with numbers because the letters are counted in numbers in the ASCII table

int	ft_strncmp(char *s1, char *s2, int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "Hello";
// 	char *str2 = "Hell";
// 	int result;
// 	result = ft_strncmp(str1, str2, 4);
// 	if (result == 0)
// 	{
// 		printf("The first 4 characters of str1 and str2 are equal.\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("The first 4 characters of str1 are less than str2.\n");
// 	}
// 	else
// 	{
// 		printf("The first 4 characters of str1 are greater than str2.\n");
// 	}
// 	return (0);
// }