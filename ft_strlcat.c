/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:13 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/27 13:08:43 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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
