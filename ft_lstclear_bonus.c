/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:58:12 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 22:23:06 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !*del)
		return ;
	while (*lst && lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
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
//   t_list *first;
//   t_list *second;
//   t_list *third;
//   t_list *fourth;

//   head = (t_list *)malloc(sizeof(t_list));
//   first = (t_list *)malloc(sizeof(t_list));
//   second = (t_list *)malloc(sizeof(t_list));
//   third = (t_list *)malloc(sizeof(t_list));
//   fourth = (t_list *)malloc(sizeof(t_list));

//   head->content = "head";
//   head->next = first;

//   first->content = "first";
//   first->next = second;

//   second->content = "second";
//   second->next = third;

//   third->content = "third";
//   third->next = fourth;

//   fourth->content = "fourth";

//   // print_list(head);

//   ft_lstclear(&second, print_deleted_content);

//   // print_list(head);
//   return 1;
// }
