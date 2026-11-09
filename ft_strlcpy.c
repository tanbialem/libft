/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 13:22:56 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:35 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
//	 char	dest[50] = "Hello, ";
//	 char	dest2[50] = "Hello, ";
//	 char	dest3[50] = "Hi\0Hi";
//	 char	dest4[50] = "Hi\0Hi";

//	 printf("ma ft   : %ld\n", ft_strlcpy(dest, "World!", 80));
//	 printf("str	 : %s\n", dest);
//	 printf("vrai ft : %ld\n", strlcpy(dest2, "World!", 80));
//	 printf("str	 : %s\n\n", dest2);
//	 printf("ma ft   : %ld\n", ft_strlcpy(dest3, "Longtest", 80));
//	 printf("str	 : %s\n", dest3);
//	 printf("vrai ft : %ld\n", strlcpy(dest4, "Longtest", 80));
//	 printf("str	 : %s\n", dest4);
//	 return (0);
// }
