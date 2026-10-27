/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:08:59 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 17:43:14 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;

// 	head = ft_lstnew("S");
// 	node1 = ft_lstnew("X");
// 	node2 = ft_lstnew("A");
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	printf("Head      : %s\n", (char *) head->content);
// 	printf("Next node : %s\n", (char *) head->next->content);
// 	free(node2);
// 	free(node1);
// 	return (0);
// }
