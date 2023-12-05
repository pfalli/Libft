/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:18:43 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/05 15:57:51 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	len_s;
	size_t	i;
	char *s2;

	i = 0;
	s2 = (char *) s;
	len_s = ft_strlen(s);
	arr = (char *) ft_malloc(len +1);
	if (start >= len_s)
		return (0);
	else if (start + len == len_s)
		return (0);
	else
	{
		while (start < len)
		{
			arr[i] = s2[start + i];
			i++;
		}
		return (arr);
	}
}



//	int main()
//	{
//		char a[]= "tu vuoi fare l'americano";
//	
//		ft_substr(a, 14, 21);
//	
//		printf("%s\n", a);
//		
//	
//	}
//		