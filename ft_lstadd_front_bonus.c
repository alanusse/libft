/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:15:30 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/18 17:25:34 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * Adds the node ’new’ at the beginning of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && *lst)
		new->next = *lst;
	*lst = new;
}
