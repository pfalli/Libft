/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:48:06 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/23 15:28:35 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	x;

	x = 0;
	little_len = 0;
	while (little[little_len] != '\0')
	{
		if (*little == '\0')
		{
			return ((char *)big);
		}
		while (*big != '\0' && len >= little_len)
		{
			if (*big == *little)
			{
				while (little[x] != '\0' && big[x] == little[x])
					x++;
			}
			return (big);
		}
	}
}
