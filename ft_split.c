/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:14:56 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/07 10:38:59 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function split the array of words putting in the middle (char c)

#include "libft.h"

int	countwords(char const *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
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

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			lenword;
	int			count;
	const char	*start = s;
	int			j;
	char		**split;

	i = 0;
	count = countwords(s, c);
	if (s == NULL)
		return (NULL);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
			{
				s++;
			}
			lenword = s - start;
			split[i] = (char *)malloc((lenword + 1) * sizeof(char));
			if (split[i] == NULL)
			{
				ft_free(split, i);
				return (NULL);
			}
			j = 0;
			while (start < s)
			{
				split[i][j] = *start;
				j++;
				start++;
			}
			split[i][j] = 0;
			i++;
		}
		else
		{
			s++;
		}
	}
	split[i] = NULL;
	return (split);
}

//	int	main(void)
//	{
//		int i = 0;
//		char const *input = "Hello, this is a sample text";
//		char **result = ft_split(input, ' ');
//
//		if (result)
//		{
//			while (result[i] != NULL)
//			{
//				printf("%s$$$", result[i]);
//				i++;
//			}
//			free(result);
//		}
//		else
//		{
//			printf("Splitting failed.\n");
//		}
//		return (0);
//	}