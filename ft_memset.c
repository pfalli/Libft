/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:47 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:20:42 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory, int c, int len)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
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