/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:56:14 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/28 13:20:26 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	char	*content1 = "first";
// 	char	*content2 = "second";
// 	char	*content3 = "third";

// 	head = ft_lstnew(strdup(content1));
// 	node1 = ft_lstnew(strdup(content2));
// 	node2 = ft_lstnew(strdup(content3));
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstclear(&head, free);
// 	if (head == NULL)
// 		printf("List cleared successfully.\n");
// 	else
// 		printf("List not cleared.\n");
// 	return (0);
// }
