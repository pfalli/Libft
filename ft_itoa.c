/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:22:18 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/07 15:49:12 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert a int to a string of char

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


char *printing_char(int length, char *ptr, int nbr)
{
    int i = length - 1;

    ptr[length] = '\0'; 

    while (i >= 0) 
	{
        if (nbr < 0) 
		{
            ptr[0] = '-';
            nbr = -nbr;
        }
        ptr[i--] = (char)(nbr % 10 + '0');
        nbr = nbr / 10;

        if (nbr == 0)
            break;
    }

    return ptr;
}

int	ft_length(long int number)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		number = -number;
		count++;
	}
	while (number != 0)
	{
		count++;
		number = number / 10;
	}
    if (count == 0)
        count = 1;
	return (count);
}


char	*ft_itoa(int n)
{
	int		length;
	int		negative;
	char	*ptr;
    long	nbr;
	
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", 1);
	nbr = n;
	length = ft_length(nbr);
	negative = 0;
	if (nbr < 0)
		negative = 1;
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[length] = '\0';
	
	printing_char(length, ptr, nbr);
	return (ptr);
}

int	main()
{
	int		n;
	char	*res;

	n = -2147483648;

	res = ft_itoa(n);
	if (res != NULL)
	{
		printf("%s\n", res);
		free(res);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
