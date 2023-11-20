/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:10:53 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/20 17:29:29 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* it copy one letter to a chosen byte of dest string */

void *ft_memchr(const void *memory, int print, int n)
{
	int x = 0;
	unsigned char *ptr;

	ptr = (unsigned char *)memory;

	if ( print == 0)
	{
		return (0);
	}
	while (x <+ n)
	{
		if ( x == n )
		{
			ptr[x] = (unsigned char *)print;
		}
		x++;
	}
	return (memory);
}