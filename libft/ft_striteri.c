/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:23:52 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 15:40:28 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// static void	ft_upper_even(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	char	str[] = "bonjour la libft !";
// 	char	*null_str = NULL;

// 	printf("Chaîne originale : %s\n", str);
// 	ft_striteri(str, ft_upper_even);
// 	printf("Chaîne modifiée  : %s\n", str);
// 	ft_striteri(null_str, ft_upper_even);
// 	if (null_str == NULL)
// 		printf("Test NULL réussi !\n");
// 	return (0);
// }
