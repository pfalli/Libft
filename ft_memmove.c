/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:28:21 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 17:10:33 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /*the same of memcpy, copy or ask */

void *ft_memmove(void *dest, const void *src, int n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)src;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (src);
}


#include <stdio.h>

int	main(void)
{
	char memory[] = "Paperone";

	ft_memmove(memory, '$', 5);

	printf("Refilled string: %s\n", memory);

	return (0);
}

