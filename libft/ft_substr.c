/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:43:54 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 12:42:06 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int main(void)
// {
//	 const char *str = "Hello, World!";
//	 unsigned int start = 7;
//	 size_t len = 5;
//	 char *substr;

//	 substr = ft_substr(str, start, len);
//	 if (substr != NULL)
//	 {
//		 printf("Substring: %s\n", substr);
//		 free(substr);
//	 }
//	 else
//	 {
//		 printf("failed malloc or invalid start position\n");
//	 }
//	 return (0);
// }
