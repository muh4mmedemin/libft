/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:26:55 by muayna            #+#    #+#             */
/*   Updated: 2025/06/13 13:20:33 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsize;
	size_t	srcsize;
	size_t	i;

	dsize = 0;
	srcsize = 0;
	i = 0;
	while (src[srcsize])
		srcsize++;
	while (dst[dsize])
		dsize++;
	while (i < dstsize && src[i] && i < dstsize - dsize - 1)
	{
		dst[dsize + i] = src[i];
		i++;
	}
	if (dsize + i < dstsize)
		dst[dsize + i] = '\0';
	if (dsize >= dstsize)
	{
		return (srcsize + dstsize);
	}
	else
		return (srcsize + dsize);
}
