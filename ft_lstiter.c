/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:25:32 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/28 13:48:57 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

// #include <stdio.h>

// static void	printt(void *content)
// {
// 	printf("%s", (char *) content);
// }

// int	main(void)
// {
// 	t_list	*head = ft_lstnew("Hello ");
// 	t_list	*node2 = ft_lstnew("Word ");
// 	t_list	*node3 = ft_lstnew("!");

// 	head->next = node2;
// 	node2->next = node3;
// 	ft_lstiter(head, printt);
// 	free(head);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
