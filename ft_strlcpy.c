/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:24:18 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/24 12:22:24 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function returns the length of the source
// EVOLUTION OF OLD strcpy avoids buffer overruns and ensures
// that the output string is null terminated.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src == 0 || dst == 0)
		return (0);
	while (src_len < size - 1 && src[src_len] != '\0')
	{
		dst[src_len] = src[src_len];
		src_len++;
	}
	dst[src_len] = '\0';
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}
