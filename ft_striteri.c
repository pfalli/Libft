/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:20:09 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/04 11:19:32 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function modifies the string s char by char directly inside the function (*f)

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i = 0;

	size_t length = ft_strlen(s);

	while (length > i)
	{
		(*f)(i, &s[i]);
		i++;
	}
}

