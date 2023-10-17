/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:31:14 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:55:51 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*func;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		func = f(lst->content);
		newnode = ft_lstnew(func);
		if (!newnode)
		{
			ft_lstclear(&newlst, del);
			free(func);
			return (NULL);
		}
		if (!newlst)
			newlst = newnode;
		else
			ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
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

// void *iterate_list(void *content)
// {
//   return (char *)ft_strdup("new content");
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

//   print_list(head);

//   print_list(ft_lstmap(head, iterate_list, print_deleted_content));

//   // print_list(head);
//   return 1;
// }