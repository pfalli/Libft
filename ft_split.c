/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:14:56 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/29 17:06:53 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function split the array of words putting in the middle (char c)

#include "libft.h"

char *nwords (char const *s, char c)
{
	int count = 0;
	int x = 0;
	
	while (*s)
	{
		if(*s != c && x ==0)
		{
			count++;
			x = 1;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

void ft_free(void *ptr)
{
	if(ptr != NULL)
		free(ptr);
}

char *copyword(char *str, )
{
	char *word;

	word = malloc
}


char **ft_split(char const *s, char c)
{
	char *arr;

	arr = ()
}