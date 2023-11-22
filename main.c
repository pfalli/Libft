/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:18:24 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 15:13:02 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


int	main(void)
{
	const char	*str = "pizza&pasta";
	int			length;

	length = ft_strlen(str);
	printf("Length of the string: %d\n", length);
	return (0);
}

int	main(void)
{
	char	x;

	x = 94;
	ft_isalpha(x);
	printf("it's alphabet or not %c", x);
	return (0);
}

int	main(void)
{
	char	x;

	x = '9';
	ft_isdigit(x);
	printf("it's alphabet or not %c", x);
	return (0);
}

int	main(void)
{
	char str[] = "12345";
	int x;

	x = atoi(str);

	printf("this is the integer: %d\n", x);

	return (x);
}