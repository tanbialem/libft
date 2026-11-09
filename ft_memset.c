/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 13:53:24 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:31 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	tab = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tab[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[50] = "Hello, World!";

// 	printf("Before memset: %s\n", str);
// 	memset(str, '*', 5);
// 	printf("After memset: %s\n", str);
// 	return (0);
// }
