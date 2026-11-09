/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:48:22 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/28 12:38:37 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (i);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = ft_lstnew("");
// 	t_list	*node1 = ft_lstnew("");
// 	t_list	*node2 = ft_lstnew("");
// 	int		i;

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	i = ft_lstsize(head);
// 	printf("i = %d\n", i);
//  free(node2);
//  free(node1);
//  free(head);
// }
