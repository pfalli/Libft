/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:29:54 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 17:31:21 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* it compares the two strings */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	const char	*ptr1 = str1;
	const char	*ptr2 = str2;
	int			x;
	int			ret;

	x = 0;
	while (n > 0 && (*ptr1 || *ptr2))
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}

int	main(void)
{
	const char	*str1 = "Bellissima";
	const char	*str2 = "Bellissima";
	int	ret;

	ret = ft_memcmp(str1, str2, 7);
	if (ret > 0)
	{
		printf("str1 is bigger than str2");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("strs are the same");
	}
	return (0);
}
