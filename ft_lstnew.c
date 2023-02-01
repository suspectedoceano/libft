/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:28:04 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/26 12:11:11 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Creates a new node for a linked list, 
 * and it takes one parameter
 * 		~content, will be stored in the node's content member variable. 
 * Allocates memory for the new node using malloc
 * initializes the content member variable
 * 		with the value of the content parameter.
 * The next member variable is initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (NULL == node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
