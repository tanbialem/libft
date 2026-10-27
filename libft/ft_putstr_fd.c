/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:58:25 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/10/27 16:12:20 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// int	main(void)
// {
// 	char	*str = "Hello, World!";
// 	int		fd = 1;

// 	// Standard output
// 	ft_putstr_fd(str, fd);
// 	return (0);
// }
