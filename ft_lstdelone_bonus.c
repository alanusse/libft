/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:27:19 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/18 18:28:02 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Takes as a parameter a node and frees the memory of the node’s content using
 * the function ’del’ given as a parameter and free the node.
 * The memory of ’next’ must not be freed.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst && del)
	{
		next_node = lst->next;
		del(lst->content);
		free(lst);
		lst = next_node;
	}
}
