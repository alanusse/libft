/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:20:39 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/16 13:29:50 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
  t_list  *current;
  int     count;

  current = lst;
  count = 0;
  while(current)
  {
    current = current->next;
    count++;
  }
  return (count);
}