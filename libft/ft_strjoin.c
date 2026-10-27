/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 10:52:25 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:34 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len1 + 1);
	ft_strlcpy(join + len1, s2, len2 + 1);
	return (join);
}

// #include <stdio.h>

// int main(void)
// {
//	 const char *s1 = "Hello, ";
//	 const char *s2 = "World!";
//	 char *result;

//	 result = ft_strjoin(s1, s2);
//	 if (result != NULL)
//	 {
//		 printf("Joined string: %s\n", result);
//		 free(result);
//	 }
//	 else
//	 {
//		 printf("failed malloc or invalid input strings\n");
//	 }
//	 return (0);
// }
