/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:39:28 by muayna            #+#    #+#             */
/*   Updated: 2025/06/14 11:50:14 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	write(fd, &"0123456789"[n % 10], 1);
}
