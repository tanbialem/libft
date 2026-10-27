/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 17:10:23 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:36 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;
	size_t	j;

	if (*lil == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && lil[j] && (i + j) < len && big[i + j] == lil[j])
			j++;
		if (lil[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
//	 const char	*big = "Hello, World!";
//	 const char	*lil = "World";
//	 size_t		len = 13;
//	 char		*result;

//	 result = ft_strnstr(big, lil, len);
//	 if (result != NULL)
//		 printf("'%s' a été trouvé à : %p\n", lil, result);
//	 else
//		 printf("'%s' n'a pas été trouvé.\n", lil);
//	 return (0);
// }
