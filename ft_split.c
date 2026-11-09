/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 11:28:17 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:08:32 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static void	free_words(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(arr[i++]);
	free(arr);
}

static char	*malloc_word(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	fill_words(char const *str, char c, char **arr)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			arr[i] = malloc_word(str, c);
			if (!arr[i])
			{
				free_words(arr, i);
				return (0);
			}
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	arr[i] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**arr;

	if (!str)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!arr)
		return (NULL);
	if (!fill_words(str, c, arr))
		return (NULL);
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
//	 char	**result;
//	 int		i;

//	 result = ft_split("\\Test\tUNdeux\\trois\\\\quatre\\test2", '\\');
//	 i = 0;
//	 while (result && result[i])
//	 {
//		 printf("ma ft   : %s\n", result[i]);
//		 free(result[i]);
//		 i++;
//	 }
//	 free(result);
//	 return (0);
// }
