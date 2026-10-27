/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 17:07:07 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:29 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	tab1 = (unsigned char *) s1;
	tab2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (tab1[i] != tab2[i])
			return (tab1[i] - tab2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str1 = "Hello, World!";
// 	const char	*str2 = "Hello, WorWld!";
// 	size_t		n = 13;
// 	int			result;

// 	result = ft_memcmp(str1, str2, n);
// 	if (result < 0)
// 		printf("'%s' est inférieur à '%s'\n", str1, str2);
// 	else if (result > 0)
// 		printf("'%s' est supérieur à '%s'\n", str1, str2);
// 	else
// 		printf("'%s' est égal à '%s'\n", str1, str2);
// 	return (0);
// }
