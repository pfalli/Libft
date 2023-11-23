/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:24:18 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 18:01:17 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function returns the length of the source
// EVOLUTION OF OLD strcpy avoids buffer overruns and ensures
// that the output string is null terminated.

#include "libft.h"

size_t	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (src == 0 || dst == 0)
	{
		return (0);
	}
	while (len < size - 1 && src[len] != '\0')
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}
