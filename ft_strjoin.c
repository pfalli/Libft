/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:58 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/27 14:47:20 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	int	ft_strlen(const char *str)
//	{
//		int	x;
//	
//		x = 0;
//		while (str[x] != '\0')
//		{
//			x++;
//		}
//		return (x);
//	}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len1 = ft_strlen(s1);
	size_t len2 = ft_strlen(s2);
	size_t total_len = len1 + len2;
	char	*dest;
	size_t	i = 0;
	size_t	x = 0;

	dest = malloc(total_len + 1);
	if (dest == 0)
		return (0);
	while ( i < len1)
	{
		dest[i] = s1[i];
		i++;
	}
	while ( x < len2)
	{
		dest[i] = s2[x];
		x++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

//	int main()
//	{
//		char a[]= "voglio";
//		char b[]= "mangiare";
//		char *c;
//	
//		c = ft_strjoin(a, b);
//	
//		printf("%s\n", c);
//		
//	
//	}