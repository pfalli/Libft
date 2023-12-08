/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:02:27 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/08 13:04:45 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

//	int	main(void)
//	{
//		// Creating a new node and assigning content
//		int value = 42; // Example content
//		t_list *node = ft_lstnew(&value);
//	
//		if (node != NULL)
//		{
//			printf("New node content: %d\n", *((int *)node->content));
//				// Accessing the content of the node
//			free(node);                                               
//				// Freeing allocated memory
//		}
//		else
//		{
//			printf("Memory allocation failed.\n");
//		}
//	
//		return (0);
//	}