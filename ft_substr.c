/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:47:34 by muayna            #+#    #+#             */
/*   Updated: 2025/06/02 13:51:00 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, unsigned long len)
{
	char	*substr;
	int		i;
	int		b;

	b = ft_strlen((char *)s);
	if (start >= len)
		return (NULL);
	if (b > start)
		b = b - start;
	else
		b = start - b;
	i = 0;
	substr = malloc(b + 1);
	if (substr == NULL)
		return (NULL);
	while (start < len && s[start] != '\0')
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
