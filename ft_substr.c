/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:47:34 by muayna            #+#    #+#             */
/*   Updated: 2025/06/15 15:15:46 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t			b;

	if (s == NULL)
		return ft_strdup("");
	if (start >= len)
		return ft_strdup("");
	b = ft_strlen((char *)s);
	if (b <= start)
		return ft_strdup("");
	b = b - start;
	if (b > len)
		substr = malloc(len + 1);
	else
		substr = malloc(b + 1);
	if (substr == NULL)
		return NULL;
	i = 0;
	while (s[i] && i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
