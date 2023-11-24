/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:53:34 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/24 18:15:03 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	int		*arr;
	size_t	i;

	total_size = count * size;
	i = 0;
	arr = (int *)malloc(total_size); // to allocate memory
	if (arr == 0)
	{
		return (0);
	}
	while (i < total_size)
	{
		((char *)arr)[i] = 0;
		i++;
	}
	return (arr); // return a pointer to the allocated memory
}
