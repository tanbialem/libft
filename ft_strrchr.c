/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 16:57:38 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:37 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == c)
			last_occurrence = (char *) s;
		s++;
	}
	if (*s == c)
		last_occurrence = (char *) s;
	return (last_occurrence);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hello, WorWld!";
// 	int			c = 'W';
// 	char		*result;

// 	result = ft_strrchr(str, c);
// 	if (result != NULL)
// 		printf("'%c' a été trouvé à : %p\n", c, result);
// 	else
// 		printf("'%c' n'a pas été trouvé.\n", c);
// 	return (0);
// }
