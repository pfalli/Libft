/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:18:20 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/13 13:34:56 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a > 47 && a < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	x;

	x = '9';
	
	ft_isdigit(x);
	printf("it's alphabet or not %c", x);
	return (0);
}