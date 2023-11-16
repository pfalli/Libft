/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:15:55 by coder             #+#    #+#             */
/*   Updated: 2021/08/18 11:28:58 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}


#include <string.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char x[] = "fancUlo";
	ft_str_is_lowercase(x);
	printf("%i\n", ft_str_is_lowercase(x));
	return(0);
}