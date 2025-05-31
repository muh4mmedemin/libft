/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:25:21 by muayna            #+#    #+#             */
/*   Updated: 2025/05/31 14:20:51 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}
