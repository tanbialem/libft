/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:48:49 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 17:14:21 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*content = "Hello, World!";
// 	t_list	*new_node = ft_lstnew(content);

// 	if (new_node)
// 	{
// 		printf("New node content: %s\n", (char *) new_node->content);
// 		free(new_node);
// 	}
// 	else
// 	{
// 		printf("Failed to create new node.\n");
// 	}
// 	return (0);
// }
