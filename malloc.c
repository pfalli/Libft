/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:45:35 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/05 14:48:51 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr; // Pointer to hold the memory address
    
    // Allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed. Exiting...");
        return -1;
    }
    
    // Assign values to the allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    
    // Display the values
    printf("Values stored in allocated memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    
    return 0;
}
