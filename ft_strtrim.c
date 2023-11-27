/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:48:20 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/27 18:32:56 by pfalli           ###   ########.fr       */
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


char *ft_strtrim(char const *s1, char const *set)
{
	char *arr;
	
	int i = 0;
	int j = ft_strlen(s1) - 1;
	int x = 0;

	arr = malloc(ft_strlen(s1));
	
	while (x < len_s1 )
	{
		if (arr[x] == 
		{
			
		}
	}
	arr[len_s1 + 1] = 0;
	return (arr);
}

int main()
{
	char *a = "$^&potter$^&";
	char *set = "$^&";
	ft_strtrim(a, set);

	printf("%s\n", a);
	
}