/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:16:00 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 15:57:15 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	test1[] = "   -42abc";
// 	char	test2[] = "INT_MAX";
// 	char	test3[] = "-2147483649";
// 	char	test4[] = " \n\t\t -9999999999999999999999999999";
// 	char	test5[] = " \n+30948ab99";
// 	char	test6[] = " \n\t\t --+9990&&99";

// 	printf("ma ft   : %d\n", ft_atoi(test1));
// 	printf("vrai ft : %d\n", atoi(test1));
// 	printf("ma ft   : %d\n", ft_atoi(test2));
// 	printf("vrai ft : %d\n", atoi(test2));
// 	printf("ma ft   : %d\n", ft_atoi(test3));
// 	printf("vrai ft : %d\n", atoi(test3));
// 	printf("ma ft   : %d\n", ft_atoi(test4));
// 	printf("vrai ft : %d\n", atoi(test4));
// 	printf("ma ft   : %d\n", ft_atoi(test5));
// 	printf("vrai ft : %d\n", atoi(test5));
// 	printf("ma ft   : %d\n", ft_atoi(test6));
// 	printf("vrai ft : %d\n", atoi(test6));
// 	return (0);
// }
