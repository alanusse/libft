/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:21:27 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/16 20:55:27 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
  if (!del)
    return ;
  if (lst)
  {
    del(lst->content);
    free(lst);
  }
}

// void print_list(t_list *head) {
//     t_list *current = head;

//     while (current != NULL) {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
// }

// void  print_deleted_content(void *content)
// {
//   printf("\ndeleted content: %s\n\n", (char *)content);
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
//   nxt->next = new;

//   new->content = "third";

//   print_list(head);

//   ft_lstdelone(nxt, print_deleted_content);

//   print_list(head);
//   return 1;
// }