/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:43:34 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 17:15:35 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(char a)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char	x;

	x = 94;
	ft_isalpha(x);
	printf("it's alphabet or not %c", x);
	return (0);
}
