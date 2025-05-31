/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:19:20 by muayna            #+#    #+#             */
/*   Updated: 2025/05/31 14:21:26 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	int				i;
	unsigned char	*source;
	unsigned char	*destination;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = -1;
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (source < destination)
	{
		while (++i <= n)
		{
			destination[n - i] = source[n - i];
		}
	}
	else
	{
		while (++i < n)
		{
			destination[i] = source[i];
		}
	}
	return (destination);
}
