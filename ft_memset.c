/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:47 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/20 15:06:20 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory, int c, int len)
{
	int	i = 0;
	unsigned char	*ptr;

	
	ptr = (unsigned char *)memory;
	
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (memory);
}

#include <stdio.h>

int	main(void)
{
	char memory[] = "Paperone";
	
	ft_memset(memory, '$', 5);
	
	printf("Refilled string: %s\n", memory);

	return (0);
}