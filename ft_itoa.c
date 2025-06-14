/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:13:47 by muayna            #+#    #+#             */
/*   Updated: 2025/06/15 15:32:39 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	mal_size(int n)
{
	int	temp;
	int	size;

	temp = n;
	size = 0;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	return (size);
}

static char	*write(int n, char *str, int size)
{
	int	temp;

	temp = n;
	if (size == mal_size(n))
		str[0] = '-';
	while (temp != 0)
	{
		str[size] = (temp % 10) + 48;
		temp /= 10;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return	("0");
	if (n == -2147483648)
		return ("-2147483648");
	char	*str;
	int		i;
	int		b;

	b = 1;
	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
		b--;
	}
	str = malloc(mal_size(n) + i);
	if (str == NULL)
		return NULL;
	str = write(n, str, mal_size(n) - b);
	if (str[0] == '-')
		str[mal_size(n) + 1] = '\0';
	else
		str[mal_size(n)] = '\0';
	return (str);
}
