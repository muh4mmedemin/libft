/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:13:47 by muayna            #+#    #+#             */
/*   Updated: 2025/06/15 09:10:18 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	mal_size(int n)
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

char	*write(int n, char *str, int size)
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
	str = write(n, str, mal_size(n) - b);
	str[mal_size(n) + 1] = '\0';
	return (str);
}

int	main()
{
	printf("%s", ft_itoa(0));
}