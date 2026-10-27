/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 16:53:52 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:31 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*tab;
// 	unsigned char	*tab2;

// 	tab = (unsigned char *) src;
// 	tab2 = (unsigned char *) dest;
// 	i = 0;
// 	while (tab[i] && i < n)
// 	{
// 		tab2[i] = tab[i];
// 		i++;
// 	}
// 	return (dest);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tabdest;
	unsigned char	*tabsrc;
	size_t			compt;

	tabdest = (unsigned char *) dest;
	tabsrc = (unsigned char *) src;
	compt = n;
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (compt > 0)
	{
		tabdest[compt - 1] = tabsrc[compt - 1];
		compt--;
	}
	return (tabdest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test[50] = "abcdef";
// 	char	*dest = &test[3];
// 	char	test2[50] = "abcde";
// 	char	*dest2 = &test[3];

// 	printf("test sur 5 octets : %s\n", (char *) ft_memmove(dest, test, 5));
// 	printf("test sur 5 octets : %s\n", (char *) memmove(dest2, test2, 5));
// }
