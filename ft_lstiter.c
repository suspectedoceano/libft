/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:00:01 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/27 14:32:31 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Takes in 
 	~a pointer to a t_list 
 *	~a pointer to a function that takes in a void pointer
 *
 *It iterates through the list, starting with the first node,
 *and applies the function to the content of each node 
 *	by dereferencing the content pointer 
 *	and passing it as a parameter to the function.
 *
 *It then moves on to the next node 
 *in the list until it reaches the end.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (NULL == lst || NULL == f)
		return ;
	while (NULL != current)
	{
		f(current->content);
		current = current->next;
	}
}
