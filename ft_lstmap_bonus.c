/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:32:56 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/18 18:28:11 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates the list ’lst’ and applies the function ’f’ on the content
 * of each node.
 * Creates a new list resulting of the successive applications of the
 * function ’f’. The ’del’ function is used to delete the content of a
 * node if needed.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*new_content;

	ret = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new_content = f(lst->content);
			tmp = ft_lstnew(new_content);
			if (!tmp)
			{
				ft_lstclear(&ret, del);
				free(new_content);
				return (NULL);
			}
			ft_lstadd_back(&ret, tmp);
			lst = lst->next;
		}
	}
	return (ret);
}
