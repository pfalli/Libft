/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:28:21 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 17:21:53 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// the same of memcpy, copy or ask 

void	*ft_memmove(void *dest, const void *src, int n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)src;
	while (i < n)
	{
		ptr[i++] = (unsigned char)src;
	}
	return (src);
}

//
//
//int	main(void)
//{
//	char memory[] = "Paperone";
//	char 2memory[] = "dhcdhd";
//	ft_memmove(memory, 2memory , 5);
//
//	printf("Refilled string: %s\n", memory);
//
//	return (0);
//}