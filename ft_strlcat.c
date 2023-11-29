/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:13 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/28 15:12:30 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//	size_t	ft_strlcat(char dst, const char *src, size_t dstsize)
//	{
//		size_t len_src = ft_strlen(src);
//		size_t len_dst = ft_strlen(dst);
//	
//		if(len_dst >= len_src)
//		{
//			len_dst = len_src;
//		}
//		if(len_dst == dstsize)
//		{
//			return (dstsize + len_src);
//		}
//		if (len_src < dstsize - len_dst)
//		{
//			ft_memcpy(dst + len_dst, src, len_src + 1);
//		}
//		else
//		{
//			ft_memcpy(dst + len_dst, src, dstsize - len_dst - 1);
//			dst[dstsize - 1] = '\0';
//		}
//		return (len_dst + len_src);
//	}
//	

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}