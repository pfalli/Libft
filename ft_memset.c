/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:47 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/14 16:44:46 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *memory, int value, size_t numofbites)
{
	*tempmemory = *memory;
	int	x;

	x = 0;
	while (x < numofbites)
	{
		tempmemory[x] = value;
		x++;
	}
	return (0);
}

void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}

#include <stdio.h>
#include <libft.h>

int	main(void)
{
	char *memory = "Paperone";
	char result;

	result = ft_memset(memory, '$', 5)

		memory[5] = '/0';

	printf("Refilled string: %s\n", memory);

	return (0);
}