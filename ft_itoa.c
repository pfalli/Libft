/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:22:18 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/04 17:49:54 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert a int to a string of char

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_length(long int number)
{
	int	count;

	count = 0;
	if (number < 0)
		number = -number;
	while (number != 0)
	{
		count++;
		number = number / 10;
	}
    if (count == 0) 
    {
        count = 1;
    }
	return (count);
}

char	*ft_itoa(int n)
{
	int		length;
	int		negative;
	char	*ptr;
    long nbr = n;

	length = ft_length(nbr);
	negative = 0;
	if (nbr < 0)
	{
		negative = 1;
		length++;
	}
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[length] = '\0';
	if (negative)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		if (negative)
			ptr[1] = '0';
		else
			ptr[0] = '0';
		return (ptr);
	}
	while (length > negative)
	{
		ptr[--length] = (char)(nbr % 10 + '0');
		nbr = nbr / 10;
	}
	return (ptr);
}

//  int	main(void)
//  {
//  	int		n;
//  	char	*res;
//  
//  	n = -2147483648LL;
//  	
//  	res = ft_itoa(n);
//  	if (res != NULL)
//  	{
//  		printf("%s\n", res);
//  		free(res);
//  	}
//  	else
//  	{
//  		printf("Memory allocation failed.\n");
//  	}
//  	return (0);
//  }
