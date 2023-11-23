/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:13 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 15:33:26 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
//	{
//		sizeof dst_len;
//		dst_len = 0;
//		while (dst_len < dstsize && dst[dst_len] != '\0')
//		{
//			dst_len++;
//		}
//		if (dstsize == 0 || dst_len >= dstsize)
//		{
//			while (*src != '\0')
//			{
//				dst_len++;
//				src++;
//			}
//			return (dst_len);
//		}
//		while (dst_len < dstsize - 1 && *src != '\0')
//		{
//			dst[dst_len] = *src;
//			dst_len++;
//			src++;
//		}
//		dst[dst_len] = '\0';
//		while (*src != '\0')
//		{
//			dst_len++;
//			src++;
//		}
//		return (dst_len);
//	}
//

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	length = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[length] = s2[i];
		i++;
		length++;
	}
	s1[length] = '\0';
	return (s1);
}
