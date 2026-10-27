/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 15:13:52 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:23 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	tab = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[50] = "Hello, World!";
// 	char	str2[50] = "Hello, World!";

// 	printf("Before bzero: %s\n", str);
// 	ft_bzero(str, 5);
// 	printf("After bzero: %s\n", str);
// 	printf("Before real bzero: %s\n", str2);
// 	bzero(str2, 5);
// 	printf("After real bzero: %s\n", str2);
// 	return (0);
// }
