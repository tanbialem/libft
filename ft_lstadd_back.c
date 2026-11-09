/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:42:30 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/28 12:38:12 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	ft_lstlast(temp)->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = ft_lstnew("first");
// 	t_list	*node1 = ft_lstnew("second");
// 	t_list	*node2 = ft_lstnew("third");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	t_list	*current = head;

// 	while (current)
// 	{
// 		printf("%s\n", (char *) current->content);
// 		current = current->next;
// 	}
// 	free(node2);
// 	free(node1);
// 	free(head);
// 	return (0);
// }
