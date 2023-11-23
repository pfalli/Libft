/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:05:43 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 14:45:30 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.

#include "libft.h"

void	ft_bzero(void *str[], int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n-- > 0)
	{
		*ptr++ = '0';
	}
}

// #include "libft.h"
// #include <stdio.h>
// 
// int	main(void)
// {
// 	char memory[] = "Paperone";
// 
// 	ft_bzero(memory, 0); // it works also with 0
// 
// 	printf("this is the result: %s\n", memory);
// 
// 	return (0);
// }