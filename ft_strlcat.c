/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 11:13:30 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:34 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (destsize <= dest_len)
		return (destsize + src_len);
	i = 0;
	while (src[i] && dest_len + i + 1 < destsize)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[50];
// 	char	dest[20];
// 	size_t	destsize;

// 	printf("--- Scénario 1: Cas nominal (Assez de place) ---\n");
// 	strcpy(src, "World!");
// 	strcpy(dest, "Hello, ");
// 	destsize = 20;
// 	printf("Résultat: %zu\n", ft_strlcat(dest, src, destsize));
// 	printf("Contenu : %s\n", dest);
// 	printf("\n--- Scénario 2: Troncature (Pas assez de place) ---\n");
// 	strcpy(src, "World!");
// 	strcpy(dest, "Hello, ");
// 	destsize = 10;
// 	printf("Résultat: %zu\n", ft_strlcat(dest, src, destsize));
// 	printf("Contenu : %s\n", dest);
// 	printf("\n--- Scénario 3: destsize inférieur à strlen(dest) ---\n");
// 	strcpy(src, "World!");
// 	strcpy(dest, "Hello, ");
// 	destsize = 4;
// 	printf("Résultat: %zu\n", ft_strlcat(dest, src, destsize));
// 	printf("Contenu : %s\n", dest);
// 	printf("\n--- Scénario 4: destsize vaut 0 ---\n");
// 	strcpy(src, "World!");
// 	strcpy(dest, "Hello, ");
// 	destsize = 0;
// 	printf("Résultat: %zu\n", ft_strlcat(dest, src, destsize));
// 	printf("Contenu : %s\n", dest);
// 	printf("\n--- Scénario 5: src vide ---\n");
// 	strcpy(src, "");
// 	strcpy(dest, "Hello, ");
// 	destsize = 20;
// 	printf("Résultat: %zu\n", ft_strlcat(dest, src, destsize));
// 	printf("Contenu : %s\n", dest);
// 	return (0);
// }
