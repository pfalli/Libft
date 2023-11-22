/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:05:43 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:19:51 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.

void	ft_bzero(void *str[], int n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i <= n)
	{
		ptr[i] = '0';
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char memory[] = "Paperone";

	ft_bzero(memory, 3);

	printf("this is the result: %s\n", memory);

	return (0);
}