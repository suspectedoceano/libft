/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:37:20 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 18:48:06 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Adds a new node to the end of a linked list data structure.
 *
 * The function takes two parameters, lst and new.
 *	~lst is a pointer to a pointer to the first node of the list,
 *	~new is a pointer to the new node that needs to be added to the list.
 *
 * 1)Uses the ft_lstlast function to find the last node of the list, 
 * 2)Then sets the next pointer of the last node to point to the new node, 
 * 		and the next pointer of the new node to NULL, 

    Here is a breakdown of how it works:

   ~The ft_lstlast(*lst) call returns a pointer 
   to the last node of the list.
   ~last->next = new adds the new node to the end 
   of the list by making the last node point to it.
   ~new->next = NULL ensures that the new node is the
   last node of the list by setting its next pointer to NULL.
 *
 *	CONTROLS
 *if (!lst) check if the pointer lst is null, 
 		if it's true the function exits.
  if (!new) check if the pointer new is null, 
  		if it's true the function exits.
  TL;DR
  In summary, adding these control statements to check 
  for null pointers before proceeding with the function
  makes it more robust and less prone to errors
  and it's a best practice to always check the 
  validity of the pointers before dereferencing them.
*/

#include "libft.h"
//#include <stdio.h>

/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!lst)
		return ;
	if (*lst)
	{
		curr = ft_lstlast(*lst);
		curr->next = new;
	}
	else
		*lst = new;
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (NULL == lst)
		return ;
	if (NULL == *lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int	main()
{
	t_list	*head, *node_1, *node_2;

	head = malloc(sizeof(t_list));
	node_1 = malloc(sizeof(t_list));
	node_2 = malloc(sizeof(t_list));

	head->content = (void *)"hello";
	node_1->content = (void *)"world";
	node_2->content = (void *)"!";
	
	ft_lstadd_back(&head, node_1);
	ft_lstadd_back(&head, node_2);

	t_list	*current;
	
	current = head;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}
}
*/
