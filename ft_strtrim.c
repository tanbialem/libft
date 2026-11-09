/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:08:38 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 12:37:23 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	d;

	d = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[d] != '\0' && ft_strchr(set, s1[d]) != NULL)
		d += 1;
	while (end > d && ft_strchr(set, s1[end - 1]) != NULL)
		end -= 1;
	return (ft_substr(s1, d, end - d));
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1 = "   Hello, World!   ";
// 	const char	*set = " ";
// 	char		*result;

// 	result = ft_strtrim(s1, set);
// 	if (result != NULL)
// 	{
// 		printf("Trimmed string: '%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("failed malloc or invalid input strings\n");
// 	}
// 	return (0);
// }
