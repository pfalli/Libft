/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:13 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:20:52 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len = 0;

	// length of destination string......btw lenght is for arrays,
		size is for memory
	while (dst_len < dstsize && dst[dst_len] != '\0')
	{
		dst_len++;
	}

	if (dstsize == 0 || dst_len >= dstsize)
	{
		while (*src != '\0')
		{
			dst_len++;
			src++;
		}
		return (dst_len);
	}

	// Copy src to dst, leaving a room for null terminator
	while (dst_len < dstsize - 1 && *src != '\0')
	{
		dst[dst_len] = *src;
		dst_len++;
		src++;
	}

	// Null-terminate the destination string
	dst[dst_len] = '\0';

	// Calculate the total length of the concatenated string
	while (*src != '\0')
	{
		dst_len++;
		src++;
	}

	return (dst_len);
}