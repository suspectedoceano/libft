/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:52:02 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/27 14:29:17 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Deletes and frees the memory of a linked list 
 *starting from a given node. 
 *
 * The function takes two parameters, lst and del.
 *	~lst, pointer to a pointer to the first node of the list, 
 *	~del is a pointer to a function that will be used
 *		 to free the memory of the node's content.
 *
 *	DESCRIPTION
 *	Deletes and frees the given node and every
 *  SUCCESSOR of that node, using the function ’del’
 *  and free(3).
 *  Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	if (NULL == lst || NULL == del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
