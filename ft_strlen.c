/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:27:55 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/15 14:27:55 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

/*
int main(void)
{
    int length;
    char str[length];

    scanf("give me a word: %s", str);

    length = ft_strlen(str);
    printf("The word %s has %d letters\n", str, length);

    return 0;
}
