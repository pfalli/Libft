/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:05:51 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 14:46:39 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int letter)
{
	int	x;

	x = 0;
	if (letter >= 'A' && letter <= 'Z')
	{
		letter + 32;
		return (letter);
	}
	else
	{
		return (0);
	}
}
