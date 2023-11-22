/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:24:18 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/22 16:21:00 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function returns the length of the source
// EVOLUTION OF OLD strcpy avoids buffer overruns and ensures that the output string is null terminated.

char	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	int len = 0;
	// check for valid pointers
	if (src == NULL || dst == NULL)
	{
		return (0);
	}
	// loop to copy the string
	while (len < size - 1 && src[len] != '\0')
	{
		dst[len] = src[len];
		len++;
	}
	// null terminate the string
	dst[len] = '\0';
	// calculating the lenght of the source string
	while (src[len] != '\0')
	{
		len++;
	}

	return (len);
}