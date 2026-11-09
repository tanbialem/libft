/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tbiais-l <tbiais-l@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 12:59:40 by tbiais-l         #+#    #+#              */
/*   Updated: 2026/10/26 15:09:56 by tbiais-l        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_numlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
		num = -num;
	while (len > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	test1 = 12345;
// 	int	test2 = -67890;
// 	int	test3 = 0;
// 	int	test4 = -2147483648;

// 	// INT_MIN
// 	int	test5 = 2147483647;

// 	// INT_MAX
// 	char	*result1 = ft_itoa(test1);
// 	char	*result2 = ft_itoa(test2);
// 	char	*result3 = ft_itoa(test3);
// 	char	*result4 = ft_itoa(test4);
// 	char	*result5 = ft_itoa(test5);

// 	printf("ft_itoa(%d) = %s\n", test1, result1);
// 	printf("ft_itoa(%d) = %s\n", test2, result2);
// 	printf("ft_itoa(%d) = %s\n", test3, result3);
// 	printf("ft_itoa(%d) = %s\n", test4, result4);
// 	printf("ft_itoa(%d) = %s\n", test5, result5);
// 	free(result1);
// 	free(result2);
// 	free(result3);
// 	free(result4);
// 	free(result5);
// 	return (0);
// }
