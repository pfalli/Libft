/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:18:43 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/05 16:57:54 by pfalli           ###   ########.fr       */
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

	if (s == NULL)
		return NULL;
	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (0);
	if (start + len == len_s)
		return (0);
	if (start + len > len_s)
        len = len_s - start;
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return NULL;
	while (i < len) 
		{
			arr[i] = s[start +i];
			i++;
		}
		arr[i] = 0;
		return (arr);
}


//	int main()
//	{
//		char a[]= "tu vuoi fare l'americano";
//	
//		ft_substr(a, 2, 6);
//	
//		printf("%s\n", a);
//		return (0);
//	}
//		