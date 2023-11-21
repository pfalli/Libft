/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:26:39 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/21 16:16:30 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	int	res = 0;
	int negative = 1;

	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;

	while (*str > 47 && *str < 58)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res *negative);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "12345";
	int x;

	x = atoi(str);

	printf("this is the integer: %d\n", x);

	return (x);
}