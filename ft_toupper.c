/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:05:54 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 15:32:46 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int letter)
{
	int	x;

	x = 0;
	if (letter >= 'a' && letter <= 'z')
	{
		letter - '0';
		return (letter);
	}
	else
	{
		return (0);
	}
}
