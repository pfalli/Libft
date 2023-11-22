/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:49:16 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:20:25 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the function copies n of characters from src to dest from 0 */
/* memcpy doesnt care about overlapping memory blocks, instead of memmove */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int		i;
	char	*ptr_dest;
	char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char dest[] = "voglio essere romano";
	char src[] = "pugliese";

	ft_memcpy(dest, src, 5);

	printf("Refilled string: %s\n", dest);

	return (0);
}