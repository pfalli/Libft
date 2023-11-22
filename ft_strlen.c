/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:25:08 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:21:03 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

// #include <stdio.h>

// int	main(void) {
//     const char *str = "pizza&pasta";
//     int length = ft_strlen(str);

//     printf("Length of the string: %d\n", length);

//     return (0);
// }