/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:28:21 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/24 13:33:33 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	if (!dst && !src)
	{
		return (0);
	}
	c_src = (char *)src;
	c_dst = (char *)dst;
	i = 0;
	if (c_dst > c_src)
	{
		while (len-- > 0)
			c_dst[len] = c_src[len];
	}
	else
	{
		while (i++ < len)
			c_dst[i] = c_src[i];
	}
	return (dst);
}

//
//
// int	main(void)
//{
//	char memory[] = "Paperone";
//	char 2memory[] = "dhcdhd";
//	ft_memmove(memory, 2memory , 5);
//
//	printf("Refilled string: %s\n", memory);
//
//	return (0);
//}