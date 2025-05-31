/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:38:21 by muayna            #+#    #+#             */
/*   Updated: 2025/05/31 14:21:10 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char	*source;
	char	*destination;
	int		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	source = (char *)src;
	destination = (char *)dest;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
