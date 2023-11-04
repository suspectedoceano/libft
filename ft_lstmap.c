/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:25:31 by ncolomer          #+#    #+#             */
/*   Updated: 2023/01/27 16:09:25 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters lst: 
	~The address of a pointer to a node.
	~f: The address of the function used 
		to iterate on the list.
	~del: The address of the function used to delete
		the content of a node if needed.
Return value
	~The new list.
	~NULL if the allocation fails.

External functs. malloc, free

DESCRIPTION
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
Returns a new list resulting of the 
successive applications of the function ’f’. 
The ’del’ function is used to
delete the content of a node if needed.

IMPLEMENTATION
~ft_lstnew->  t_list  *ft_lstnew(void *content)
~ft_lstclear->void ft_lstclear(t_list **lst, void (*del)(void*)) 
~ft_lstadd_back->void ft_lstadd_back(t_list **lst, t_list *new)
~ft_lstiter->void ft_lstiter(t_list *lst, void (*f)(void *))
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = ft_lstnew(f(lst->content));
		else
			new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}	
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
