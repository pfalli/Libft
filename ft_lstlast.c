/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:26:40 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/08 14:52:34 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

//	int main() {
//		 // linked list
//		 t_list *head = malloc(sizeof(t_list));
//		 t_list *second = malloc(sizeof(t_list));
//		 t_list *third = malloc(sizeof(t_list));
//
//		 head->content = 757;
//		 head->next = second;
//
//		 second->content = 33;
//		 second->next = third;
//
//		 third->content = 1;
//		 third->next = NULL;
//
//		 t_list *last = ft_lstlast(head);
//
//
//		 if (last != NULL) {
//		     printf("The last element of the list contains data: %d\n",
//			last->content);
//		 } else {
//		     printf("The list is empty!\n");
//		 }
//
//		 free(head);
//		 free(second);
//		 free(third);
//
//		 return (0);
//	}