/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:04:08 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/16 19:20:23 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  *current;

  if (*lst)
  {
    current = *lst;
    while (current->next)
      current = current->next;
    current->next = new;
  }
  else
    *lst = new;
}

// void print_list(t_list *head) {
//     t_list *current = head;

//     while (current != NULL) {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
// }

// int main()
// {
//   t_list *head;
//   t_list *nxt;
//   t_list *new;

//   head = (t_list *)malloc(sizeof(t_list));
//   nxt = (t_list *)malloc(sizeof(t_list));
//   new = (t_list *)malloc(sizeof(t_list));

//   head->content = "first";

//   nxt->content = "second";

//   new->content = "third";

//   ft_lstadd_back(&head, nxt);
//   ft_lstadd_back(&head, new);
//   print_list(head);
//   return 1;
// }