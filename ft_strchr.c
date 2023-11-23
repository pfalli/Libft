/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:13:10 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 14:46:14 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr() function checks whether the original
// string contains defined characters.
// If the character is found inside the string,
// it returns a pointer value; otherwise,
// it returns a null pointer. While using the strchr()
// function in the C programming language,
// we need to import the <string.h>

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (str != '\0')
	{
		if (str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (0);
}

//	
//	int	main(void)
//	{
//		int		c;
//	    const char *x = "voglio il pallone";
//		char	*result;
//	
//	    c = 'p';
//	    result = ft_strchr(x, c);
//	    if(result = c)
//	    {
//	        printf("yes there is the same letter");
//	    }
//	    else
//	    {
//	        printf("there is not")
//	    }
//	    return (0)
//	}

// In C, arrays and pointers are closely related
// When you use an array name in most expressions,
// it is automatically converted to a pointer to
// the first element of the array.

// const char *str = "Hello";

// In this example, str is a pointer to the first 
// character of the string "Hello."
//  if i do str++, str is pointing now to "e" and so on...