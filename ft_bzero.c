/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:05:43 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/21 17:11:17 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area. 

void ft_bzero(void *str[], int n)
{
	int i = 0;
	unsigned char *ptr;
	
	ptr = (unsigned char *)str;

	while (i <= n)
	{
		ptr[i] = '0';
		i++;
	}
}


#include <stdio.h>

int main()
{
	char memory[] = "Paperone";
	
	ft_bzero (memory, 3);
	
	printf( "this is the result: %s\n", memory);

	return (0);
}