/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:48:06 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/28 18:47:27 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	x;

	x = 0;
	little_len = ft_strlen(little);
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (*big && len >= little_len)
	{
		if (*big == *little)
		{
			while (little[x] != '\0' && big[x] == little[x])
			{
				x++;
			}
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (0);
}
