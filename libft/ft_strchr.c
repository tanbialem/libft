/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 16:28:57 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:33 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	int			c = 'l';
// 	char		*result;

// 	result = ft_strchr(str, c);
// 	if (result != NULL)
// 		printf("'%c' a été trouvé à : %p\n", c, result);
// 	else
// 		printf("'%c' n'a pas été trouvé.\n", c);
// 	return (0);
// }
