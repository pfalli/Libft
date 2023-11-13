/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:53:07 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/13 15:24:24 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint (int a)
{
	if (a > 32 && a < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}