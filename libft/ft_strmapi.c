/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:55:58 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 15:21:20 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tab;
	int		i;
	int		size;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	tab = ft_calloc((size + 1), sizeof(char));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	return (tab);
}

// #include <stdio.h>

// static char	ft_upper_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*result;
// 	char	*null_res;

// 	str = "bonjour la libft !";
// 	result = ft_strmapi(str, ft_upper_even);
// 	printf("Chaîne originale : %s\n", str);
// 	printf("Chaîne modifiée  : %s\n", result);
// 	null_res = ft_strmapi(NULL, ft_upper_even);
// 	if (null_res == NULL)
// 		printf("Test NULL réussi !\n");
// 	free(result);
// 	return (0);
// }
