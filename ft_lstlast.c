/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:09:32 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/28 12:43:00 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = ft_lstnew("third");
// 	t_list	*node1 = ft_lstnew("Second");
// 	t_list	*node2 = ft_lstnew("first");
// 	t_list	*last_node;

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	last_node = ft_lstlast(head);
// 	if (last_node)
// 		printf("Last node content: %s\n", (char *) last_node->content);
// 	else
// 		printf("The list is empty.\n");
// 	free(node2);
// 	free(node1);
// 	free(head);
// 	return (0);
// }
