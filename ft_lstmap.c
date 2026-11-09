/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:51:47 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/29 13:21:23 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			if (del)
				del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

// #include <stdio.h>

// static void	*map_content(void *content)
// {
// 	char	*str;
// 	char	*new_str;
// 	size_t	i;

// 	str = (char *) content;
// 	new_str = ft_strdup(str);
// 	if (!new_str)
// 		return (NULL);
// 	i = 0;
// 	while (new_str[i])
// 	{
// 		new_str[i] = (char) ft_toupper((unsigned char) new_str[i]);
// 		i++;
// 	}
// 	return (new_str);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new_head;
// 	char	*content1 = "first";
// 	char	*content2 = "second";
// 	char	*content3 = "third";

// 	head = ft_lstnew(ft_strdup(content1));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup(content2)));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup(content3)));
// 	new_head = ft_lstmap(head, map_content, free);
// 	while (new_head)
// 	{
// 		printf("%s\n", (char *) new_head->content);
// 		new_head = new_head->next;
// 	}
// 	ft_lstclear(&head, free);
// 	ft_lstclear(&new_head, free);
// 	return (0);
// }
