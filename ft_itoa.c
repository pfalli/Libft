/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:22:18 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/01 16:14:54 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert a int to a string of char

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

int ft_length(int number) 
{
    int count = 0;

    number = (number < 0) ? -number : number;

    while (number != 0) {
        count++;
        number /= 10;
    }

    if (count == 0) {
        count = 1;
    }

    return (count);
}

char *ft_itoa(int n) 
{
    int length = ft_length(n);
    int negative = 0;

    if (n < 0) 
	{
        negative = 1;
        length++; 
    }

    char *ptr = (char *)malloc((length + 1) * sizeof(char));

    if (ptr == NULL) 
	{
        return NULL; 
    }

	ptr[length] = '\0'; 
	if (negative) 
	{
        ptr[0] = '-'; 
        n = -n; 
	}
    if (n == 0) {
        ptr[negative ? 1 : 0] = '0'; 
        return ptr;
    }

    while (length > negative) 
	{
        ptr[--length] = (char)(n % 10 + '0');
        n = n / 10;
    }

    return (ptr);
}

//	int main() {
//	    int n = 3456;
//	    char *res = ft_itoa(n);
//	
//	    if (res != NULL) {
//	        printf("%s\n", res);
//	        free(res); 
//	    } else {
//	        printf("Memory allocation failed.\n");
//	    }
//	
//	    return (0);
//	}
//	