/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 15:36:20 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:30 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tab;
	unsigned char	*tab2;

	tab = (unsigned char *) src;
	tab2 = (unsigned char *) dest;
	i = 0;
	while (tab[i] && i < n)
	{
		tab2[i] = tab[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test[50] = "abcdef";
// 	char	*dest = &test[3];
// 	char	test2[50] = "abcde";
// 	char	*dest2 = &test[3];

// 	printf("test 5 octets : %s\n", (char *) ft_memcpy(dest, test, 5));
// 	printf("test sur 5 octets : %s\n", (char *) memcpy(dest2, test2, 5));
// }
