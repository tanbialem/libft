/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 15:56:37 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:33 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tab;
	size_t	size;

	size = ft_strlen(s);
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s, size + 1);
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	char		*dup;

// 	dup = strdup(str);
// 	if (dup != NULL)
// 	{
// 		printf("Chaîne dupliquée : %s\n", dup);
// 		free(dup);
// 	}
// 	else
// 	{
// 		printf("Échec de l'allocation mémoire.\n");
// 	}
// 	return (0);
// }
