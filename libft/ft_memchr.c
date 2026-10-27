/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:27:50 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 11:06:45 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (tab[i] == c)
			return ((char *) & tab[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//	 const char	*str = "Hello, World!";
//	 const char	*str2 = "Longtestttt";
//	 const char	str3 = "Hi\0Hitest";

//	 printf("ma ft   : %s\n", (char) ft_memchr(str, 'W', 13));
//	 printf("vrai ft : %s\n", (char ) memchr(str, 'W', 13));
//	 printf("ma ft   : %s\n", (char) ft_memchr(str2, 't', 6));
//	 printf("vrai ft : %s\n", (char ) memchr(str2, 't', 6));
//	 printf("ma ft   : %s\n", (char) ft_memchr(str3, '\0', 30));
//	 printf("vrai ft : %s\n", (char *) memchr(str3, '\0', 30));
//	 return (0);
// }
