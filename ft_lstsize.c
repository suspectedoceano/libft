/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:43:34 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/26 12:46:47 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPTION
 * Counts the number of nodes in a linked list data structure.
 * The function takes one parameter
 * 		~lst, which is a pointer to the first node of the list.
 * 
 * The function uses a loop to iterate through the list, 
 * following the next pointers of each node, 
 * until it reaches the end of the list, 
 * and returns the number of nodes it has encountered.
 * 
 * This code allows me to move in the linked list
 *
 * 		👀 current = current->next; 👀
 *
*/

//#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;

	counter = 0;
	while (lst)
	{
		++counter;
		lst = lst->next;
	}
	return (counter);
}

/*
int main(void) {
    t_list *head;
    head = ft_lstnew("first node");
    head->next = ft_lstnew("second node");
    head->next->next = ft_lstnew("third node");

    printf("The number of nodes in the list is: %d\n", ft_lstsize(head));

    return 0;
}
*/
