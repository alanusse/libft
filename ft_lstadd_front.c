/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:06:10 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/16 13:19:02 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
  new->next = *lst;
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
//   head->next = nxt;

//   nxt->content = "second";
//   nxt->next = NULL;

//   new->content = "third";

//   ft_lstadd_front(&head, new);
//   print_list(head);
//   return 1;
// }