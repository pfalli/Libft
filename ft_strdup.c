/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:42:40 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/24 18:14:50 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	len_s1;

	len_s1 = ft_strlen(s1) + 1; // calculate the length of the string
	arr = malloc(len_s1);       // allocate memory exacrtly for the string
	if (s1 == 0)
		return (0);
	ft_memcpy(arr, s1, len_s1);
	return (arr);
}
