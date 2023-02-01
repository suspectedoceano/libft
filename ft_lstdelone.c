/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:03:21 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 18:53:32 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Function that frees the memory of a single node 
 *of a linked list data structure. 
 *The function takes two parameters: lst and del.
 *		~lst is a pointer to the node that needs to be freed,
 *		~del is a pointer to a function that will be 
 *			used to free the memory of the node's content.
*/

/*
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{	
	if (NULL == lst || NULL == del)
		return ;
	del(lst->content);
	free(lst);
}
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
