/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:47:56 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 10:41:14 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns the last node of a linked list data structure.
 * The function takes one parameter, 
 * 		~lst, which is a pointer to the first node of the list.
 *
 * The function uses a loop to iterate through the list,
 * following the next pointers of each node,
 * until it reaches the end of the list, and returns the last node.
 *
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (NULL == lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
